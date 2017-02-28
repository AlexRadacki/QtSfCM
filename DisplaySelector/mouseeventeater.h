#ifndef MOUSEEVENTEATER_H
#define MOUSEEVENTEATER_H

#include <QObject>
#include <QEvent>
#include <QMouseEvent>
#include <QFrame>

class MouseEventEater : public QObject
{
    Q_OBJECT
public:
    explicit MouseEventEater(QObject *parent = 0);

signals:

public slots:

private:
    QPoint lastMousePos;
    QPoint offset;
    QFrame *grabbedObject;

protected:
    bool eventFilter(QObject *obj, QEvent *event);
};

#endif // MOUSEEVENTEATER_H
