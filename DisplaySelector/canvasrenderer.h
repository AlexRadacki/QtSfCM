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
      OpenGLObject *glObjects[64];
      void initializeGL();
      void resizeGL(int width, int height);
      void paintGL();
      void teardownGL();
      void createSurface(QOpenGLTexture *texture);
      OpenGLObject * createVideoSurface(QOpenGLTexture *texture);
private :
      QOpenGLBuffer vbo;

      QOpenGLVertexArrayObject m_object;
      QOpenGLBuffer m_vertex;
      QOpenGLShaderProgram *m_program;
      QOpenGLTexture *texture;
      int objectCount;
};

#endif // CANVASRENDERER_H
