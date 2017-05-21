#include "videoframegrabber.h"
#include <QVideoProbe>

VideoFrameGrabber::VideoFrameGrabber(QObject *parent): QAbstractVideoSurface(parent)
{
    outputImage = QImage(QSize(100,100),QImage::Format_RGB32);
    outputImage.fill(Qt::red);
    outputTexture = new QOpenGLTexture(outputImage);
    isCreated = false;
    isCreatedGL = false;
    frames = 0;
}


bool VideoFrameGrabber::present(const QVideoFrame &frame)
{
    if(frame.isValid())
        {
            QVideoFrame videoFrame(frame);

            if(videoFrame.map(QAbstractVideoBuffer::ReadOnly))
            {
            //qDebug() << "present" <<  QAbstractVideoSurface::error();
                   outputImage = QImage(
                        videoFrame.bits(),
                        videoFrame.width(),
                        videoFrame.height(),
                        videoFrame.bytesPerLine(),
                        QVideoFrame::imageFormatFromPixelFormat(frame.pixelFormat())
                        );

                   // destroy current openGL texture object and create a new one - this is rather expensive.
                      //glObject->texture->~QOpenGLTexture();
                      //glObject->texture = new QOpenGLTexture(outputImage);

                   // next attempt: override data of texture object (same performance when not mirrored())
                      glObject->texture->destroy();
                      glObject->texture->create();
                      glObject->texture->setMipLevels(0);
                      glObject->texture->setData(outputImage);

                   // note: up to 5 full HD videos (mp4, 30fps) are playable at the same time without a lag. CPU load ca 80%
                   // Using QImage::mirrored() reduces the framerate however.
                      // todo: + find a new way to upload data to gpu (using framebuffer objects e.g.)
                      //       + flip QImage in shader using UVs
                      //       + researching different video codecs for better cpu load -> look at HAP codecs

            }

            videoFrame.unmap();
        }
        return true;
}


QList<QVideoFrame::PixelFormat> VideoFrameGrabber::supportedPixelFormats(QAbstractVideoBuffer::HandleType handleType) const
{
    qDebug() << "supportedPixelFormats" <<  QAbstractVideoSurface::error();
    Q_UNUSED(handleType);
    return QList<QVideoFrame::PixelFormat>()
           << QVideoFrame::Format_ARGB32
           << QVideoFrame::Format_ARGB32_Premultiplied
           << QVideoFrame::Format_RGB32
           << QVideoFrame::Format_RGB24
           << QVideoFrame::Format_RGB565
           << QVideoFrame::Format_RGB555
           << QVideoFrame::Format_ARGB8565_Premultiplied
           << QVideoFrame::Format_BGRA32
           << QVideoFrame::Format_BGRA32_Premultiplied
           << QVideoFrame::Format_BGR32
           << QVideoFrame::Format_BGR24
           << QVideoFrame::Format_BGR565
           << QVideoFrame::Format_BGR555
           << QVideoFrame::Format_BGRA5658_Premultiplied
           << QVideoFrame::Format_AYUV444
           << QVideoFrame::Format_AYUV444_Premultiplied
           << QVideoFrame::Format_YUV444
           << QVideoFrame::Format_YUV420P
           << QVideoFrame::Format_YV12
           << QVideoFrame::Format_UYVY
           << QVideoFrame::Format_YUYV
           << QVideoFrame::Format_NV12
           << QVideoFrame::Format_NV21
           << QVideoFrame::Format_IMC1
           << QVideoFrame::Format_IMC2
           << QVideoFrame::Format_IMC3
           << QVideoFrame::Format_IMC4
           << QVideoFrame::Format_Y8
           << QVideoFrame::Format_Y16
           << QVideoFrame::Format_Jpeg
           << QVideoFrame::Format_CameraRaw
           << QVideoFrame::Format_AdobeDng;
}


bool VideoFrameGrabber::start(const QVideoSurfaceFormat &format)
{
    qDebug() << "start"<<  QAbstractVideoSurface::error();
        if(isCreated == false)
        {

            isCreated = true;
        }
        else
        {
            glObject = renderer->createVideoSurface(outputTexture);
        }
        return QAbstractVideoSurface::start(format);

}

void VideoFrameGrabber::stop()
{
    qDebug() << "stop"<<  QAbstractVideoSurface::error();
        QAbstractVideoSurface::stop();
}

