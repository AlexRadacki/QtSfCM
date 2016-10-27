// myglwidget.h

#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QGLWidget>

class MyGLWidget : public QGLWidget
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
    float xRot;
    float yRot;
    float zRot;
    void draw();
    void triangle(QVector3D a, QVector3D b, QVector3D c);
    int frameCounter;
    int framesPerSecond;
};

#endif // MYGLWIDGET_H
