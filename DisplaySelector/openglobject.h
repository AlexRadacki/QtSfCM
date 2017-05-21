#ifndef OPENGLOBJECT_H
#define OPENGLOBJECT_H
#include <QMatrix4x4>
#include <QOpenGLTexture>
#include <QOpenGLBuffer>
class OpenGLObject
{
public:
    OpenGLObject(QMatrix4x4 transform, QOpenGLTexture *m_texture);
    ~OpenGLObject();
    QMatrix4x4 transform;
    QOpenGLTexture *texture;
    void UpdateTexture(QOpenGLTexture *m_texture);
};

#endif // OPENGLOBJECT_H
