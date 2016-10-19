// myglwidget.cpp

#include <QtWidgets>
#include <QtOpenGL>
#include <QDebug>
#include "myglwidget.h"
#include "cstdlib"

MyGLWidget::MyGLWidget(QWidget *parent)
    : QGLWidget(QGLFormat(QGL::SampleBuffers), parent)
{
    xRot = 0;
    yRot = 0;
    zRot = 0;
    auto timer = new QTimer(parent);
    connect(timer, &QTimer::timeout, [&]{updateRotation();});
    timer->start();
}

MyGLWidget::~MyGLWidget()
{
}

QSize MyGLWidget::minimumSizeHint() const
{
    return QSize(50, 50);
}

QSize MyGLWidget::sizeHint() const
{
    return QSize(400, 400);
}


void MyGLWidget::initializeGL()
{
    QColor c;
    c.setRgb(rand() % 127, rand() % 127, rand() % 127);
    qglClearColor(c);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_CULL_FACE);
    glShadeModel(GL_SMOOTH);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    static GLfloat lightPosition[4] = { 0, 0, 10, 1.0 };
    glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

    qInfo() << "OpenGL initialized";
    paintGL();
}

void MyGLWidget::randomColor()
{
    QColor c;
    c.setRgb(rand() % 127, rand() % 127, rand() % 127);
    qglClearColor(c);

    updateGL();
    paintGL();
}

void MyGLWidget::updateRotation()
{
    xRot += 10;
    yRot += 10;
    zRot += 10;
    updateGL();
    paintGL();
}

void MyGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -10.0);
    glRotatef(xRot / 16.0, 1.0, 0.0, 0.0);
    glRotatef(yRot / 16.0, 0.0, 1.0, 0.0);
    glRotatef(zRot / 16.0, 0.0, 0.0, 1.0);
    draw();
}

void MyGLWidget::resizeGL(int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
#ifdef QT_OPENGL_ES_1
    glOrthof(-2, +2, -2, +2, 1.0, 15.0);
#else
    glOrtho(-2, +2, -2, +2, 1.0, 15.0);
#endif
    glMatrixMode(GL_MODELVIEW);
}

void MyGLWidget::draw()
{
    qglColor(Qt::red);

    triangle(QVector3D(-1,-1,0),QVector3D(1,-1,0),QVector3D(0,0,1.2));
    triangle(QVector3D(1,-1,0),QVector3D(1,1,0),QVector3D(0,0,1.2));
    triangle(QVector3D(1,1,0),QVector3D(-1,1,0),QVector3D(0,0,1.2));
    triangle(QVector3D(-1,1,0),QVector3D(-1,-1,0),QVector3D(0,0,1.2));

    triangle(QVector3D(-1,-1,0),QVector3D(0,0,-1.2),QVector3D(1,-1,0));
    triangle(QVector3D(1,-1,0),QVector3D(0,0,-1.2),QVector3D(1,1,0));
    triangle(QVector3D(1,1,0),QVector3D(0,0,-1.2),QVector3D(-1,1,0));
    triangle(QVector3D(-1,1,0),QVector3D(0,0,-1.2),QVector3D(-1,-1,0));


}
void MyGLWidget::triangle(QVector3D a, QVector3D b, QVector3D c)
{

    QVector3D v = b-a;
    QVector3D w = c-a;

    QVector3D n = QVector3D::normal(v,w);
    glBegin(GL_TRIANGLES);
        glNormal3f(n.x(),n.y(),n.z());

        glVertex3f(a.x(),a.y(),a.z());
        glVertex3f(b.x(),b.y(),b.z());
        glVertex3f(c.x(),c.y(),c.z());
    glEnd();

}
