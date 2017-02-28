#include "mouseeventeater.h"
#include <QDebug>

MouseEventEater::MouseEventEater(QObject *parent) : QObject(parent)
{
    grabbedObject = NULL;
}

bool MouseEventEater::eventFilter(QObject *obj, QEvent *event)
{
    QMouseEvent *mouseEvent = static_cast<QMouseEvent *>(event);
    if ( mouseEvent != 0 )
    {
        QFrame *objectInQuestion = qobject_cast<QFrame*>(obj);

        if(mouseEvent->type() == QEvent::MouseButtonPress)
        {
            qDebug()<< "press at: " + QString::number(mouseEvent->pos().x()) + ":" + QString::number(mouseEvent->pos().y());
            offset = mouseEvent->pos();
            lastMousePos = mouseEvent->pos();
            grabbedObject = objectInQuestion;
            return true;
        }
        else if(mouseEvent->type() == QEvent::MouseButtonRelease)
        {
            qDebug()<< "release";
            grabbedObject = NULL;
            return true;
        }
        else if(mouseEvent->type() == QEvent::MouseMove && grabbedObject != NULL)
        {

             grabbedObject->move(grabbedObject->pos() + (mouseEvent->pos() - lastMousePos) - offset);
             lastMousePos = mouseEvent->pos(); 
             return true;

        }
        else
        {
            lastMousePos = mouseEvent->pos();
            return QObject::eventFilter(obj, event);
        }

    }
    else
    {
        // standard event processing
        return QObject::eventFilter(obj, event);
    }
}
