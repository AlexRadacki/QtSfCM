#ifndef VIDEOFRAMEGRABBER_H
#define VIDEOFRAMEGRABBER_H

#include <QList>
#include <QVideoFrame>
#include <QVideoSurfaceFormat>
#include <QMediaPlayer>
#include <QAbstractVideoSurface>
#include "canvasrenderer.h"
#include "openglobject.h"

class VideoFrameGrabber : public QAbstractVideoSurface
{
    Q_OBJECT
public:
    VideoFrameGrabber(QObject *parent = 0);
    QList<QVideoFrame::PixelFormat> supportedPixelFormats(QAbstractVideoBuffer::HandleType type) const;
    QImage outputImage;
    QOpenGLTexture *outputTexture;
    QOpenGLTexture *outputPointer;
    CanvasRenderer *renderer;
    bool present(const QVideoFrame &frame);
    bool start(const QVideoSurfaceFormat &format);
    void stop();
    QVideoSurfaceFormat m_format;
    OpenGLObject *glObject;


private :
    bool isCreated;
    bool isCreatedGL;
    QOpenGLTexture *tmpGL;
    int frames;
};

#endif // VIDEOFRAMEGRABBER_H
