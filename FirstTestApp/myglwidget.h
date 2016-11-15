// myglwidget.h

#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H
#include <QOpenGLShaderProgram>
#include <QOpenGLFunctions>
#include <QGLWidget>

class MyGLWidget : public QGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit MyGLWidget(QWidget *parent = 0);
    ~MyGLWidget();
    void randomColor();
    float calcFps();
    void updateRotation();

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int width, int height);

    QSize minimumSizeHint() const;
    QSize sizeHint() const;



private:

    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;

    QOpenGLShaderProgram *m_program;

    float xRot;
    float yRot;
    float zRot;
    void draw();
    void triangle(QVector3D a, QVector3D b, QVector3D c);
    int frameCounter;
    int framesPerSecond;
};

#endif // MYGLWIDGET_H
