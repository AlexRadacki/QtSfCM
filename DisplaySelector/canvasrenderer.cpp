#include "canvasrenderer.h"
#include <QDebug>
#include <QString>
#include <QOpenGLShaderProgram>
#include "videoframegrabber.h"

CanvasRenderer::CanvasRenderer(UpdateBehavior updateBehavior, QWindow *parent)
{

}

CanvasRenderer::~CanvasRenderer()
{
    makeCurrent();
    teardownGL();
}

void CanvasRenderer::initializeGL()
{

    initializeOpenGLFunctions();

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);

    // Create Shader (Do not release until VAO is created)
    m_program = new QOpenGLShaderProgram();
    m_program->addShaderFromSourceFile(QOpenGLShader::Vertex, "C:\\Users\\Alex\\Documents\\GitHub\\QtSfCM\\DisplaySelector\\shaders\\simple.vert");
    m_program->addShaderFromSourceFile(QOpenGLShader::Fragment, "C:\\Users\\Alex\\Documents\\GitHub\\QtSfCM\\DisplaySelector\\shaders\\simple.frag");
    m_program->bindAttributeLocation("vertex", 0);
    m_program->bindAttributeLocation("texCoord", 1);
    m_program->link();
    m_program->bind();

    m_program->setUniformValue("texture", 0);
    m_program->release();
}

void CanvasRenderer::resizeGL(int width, int height)
{
  // Currently we are not handling width/height changes
  (void)width;
  (void)height;
}

void CanvasRenderer::paintGL()
{
  // Clear
  glClearColor(0.1f, 0.2f, 0.3f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  int i;
  for(i = 0; i < glObjects.count(); i++)
  {
      vertexBufferObject.bind();
      m_program->bind();
      m_program->setUniformValue("matrix", glObjects.at(i)->transform);
      m_program->enableAttributeArray(0);
      m_program->enableAttributeArray(1);
      m_program->setAttributeBuffer(0, GL_FLOAT, 0, 3, 5 * sizeof(GLfloat));
      m_program->setAttributeBuffer(1, GL_FLOAT, 3 * sizeof(GLfloat), 2, 5 * sizeof(GLfloat));
      glObjects.at(i)->texture->bind();
      glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
      glObjects.at(i)->texture->release();
      m_program->release();
      vertexBufferObject.release();
  }
}

void CanvasRenderer::teardownGL()
{
    int i;
    for(i = 0; i < glObjects.count(); i++)
    {
        glObjects.at(i)->~OpenGLObject();
    }
    delete m_program;
    doneCurrent();
}

void CanvasRenderer::createSurface(QOpenGLTexture *texture)
{
    static const int coords[4][3] = { { +1, -1, 1 }, { -1, -1, -1 }, { -1, +1, 1 }, { +1, +1, 1 } };
    QVector<GLfloat> vertData;

    for (int j = 0; j < 4; ++j) {
        // vertex position
        vertData.append(0.2 * coords[j][0]);
        vertData.append(0.2 * coords[j][1]);
        vertData.append(0.2 * coords[j][2]);
        // texture coordinate
        vertData.append(j == 0 || j == 3);
        vertData.append(j == 0 || j == 1);
    }
    vertexBufferObject.create();
    vertexBufferObject.bind();

    vertexBufferObject.allocate(vertData.constData(), vertData.count() * sizeof(GLfloat));

    QMatrix4x4 transform;
    transform.ortho(-0.5f, +0.5f, +0.5f, -0.5f, 0.1f, 15.0f);
    transform.translate(glObjects.count() / 10.0f, glObjects.count() / 10.0f, -10.0f + (glObjects.count() / 2.0f));

    OpenGLObject *new3dObject = new OpenGLObject(transform, texture);
    glObjects.append(new3dObject);
}
OpenGLObject * CanvasRenderer::createVideoSurface(QOpenGLTexture *texture)
{
    static const int coords[4][3] = { { +1, -1, 1 }, { -1, -1, -1 }, { -1, +1, 1 }, { +1, +1, 1 } };
    QVector<GLfloat> vertData;

    for (int j = 0; j < 4; ++j) {
        // vertex position
        vertData.append(0.2 * coords[j][0]);
        vertData.append(0.2 * coords[j][1]);
        vertData.append(0.2 * coords[j][2]);
        // texture coordinate
        vertData.append(j == 0 || j == 3);
        vertData.append(j == 0 || j == 1);
    }
    vertexBufferObject.create();
    vertexBufferObject.bind();
    vertexBufferObject.allocate(vertData.constData(), vertData.count() * sizeof(GLfloat));

    QMatrix4x4 transform;
    transform.ortho(-0.5f, +0.5f, +0.5f, -0.5f, 0.1f, 15.0f);
    transform.translate(glObjects.count() / 10.0f, glObjects.count() / 10.0f, -10.0f + (glObjects.count() / 2.0f));
    OpenGLObject *new3dObject = new OpenGLObject(transform, texture);
    glObjects.append(new3dObject);
    return new3dObject;
}
