#include "openglobject.h"

OpenGLObject::OpenGLObject(QMatrix4x4 m_transform, QOpenGLTexture *m_texture)
{
    texture = m_texture;
    transform = m_transform;
}

OpenGLObject::~OpenGLObject()
{
    delete this;
}

void OpenGLObject::UpdateTexture(QOpenGLTexture *m_texture)
{
    texture = m_texture;
}
