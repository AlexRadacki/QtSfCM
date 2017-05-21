#ifndef CANVASRENDERER_H
#define CANVASRENDERER_H

#include <QOpenGLWindow>
#include <QOpenGLFunctions>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLTexture>
#include "openglobject.h"

class QOpenGLShaderProgram;


class CanvasRenderer : public QOpenGLWindow, protected QOpenGLFunctions
{
    Q_OBJECT
public:
     CanvasRenderer(UpdateBehavior updateBehavior, QWindow *parent);
    ~CanvasRenderer();
      QList<OpenGLObject *> glObjects;
      void initializeGL();
      void resizeGL(int width, int height);
      void paintGL();
      void teardownGL();
      void createSurface(QOpenGLTexture *texture);
      OpenGLObject * createVideoSurface(QOpenGLTexture *texture);
private :
      QOpenGLBuffer vertexBufferObject;
      QOpenGLShaderProgram *m_program;
};

#endif // CANVASRENDERER_H
