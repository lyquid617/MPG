#include "qbjectwidget.h"

Qbjectwidget::Qbjectwidget(QWidget *parent) : QWidget(parent)
{
    setQbjectIcon();
}
void Qbjectwidget::setQbjectIcon()
{
    closeButton=new QPushButton(this);
    MaxButton=new QPushButton(this);
    MinButton=new QPushButton(this);
    MinniButton=new QPushButton(this);
    closeButton->setGeometry(315,0,25,25);
    MaxButton->setGeometry(285,0,25,25);
    MinButton->setGeometry(255,0,25,25);
    MinniButton->setGeometry(225,0,25,25);
    closeButton->setCursor(Qt::PointingHandCursor);
    closeButton->setToolTip(QString("关闭"));
    MaxButton->setCursor(Qt::PointingHandCursor);
    MaxButton->setToolTip(QString("最大化"));
    MinButton->setCursor(Qt::PointingHandCursor);
    MinButton->setToolTip(QString("最小化"));
    MinniButton->setCursor(Qt::PointingHandCursor);
    MinniButton->setToolTip(QString("mini 模式"));
    closeButton->setStyleSheet("QPushButton{background:rgb(50,50,50);border:0px;}\
                               QPushButton{image:url(:/image/image/close_normal.png)}\
                               QPushButton:hover{image:url(:/image/image/close_pressed.png);}");
     MaxButton->setStyleSheet("QPushButton{background:rgb(50,50,50);border:0px;}\
                                QPushButton{image:url(:/image/image/max_normal .png)}\
                                QPushButton:hover{image:url(:/image/image/max_pressed.png)}");
     MinButton->setStyleSheet("QPushButton{background:rgb(50,50,50);border:0px;}\
                                QPushButton{image:url(:/image/image/min_pressed.png)}\
                                QPushButton:hover{image:url(:/image/image/min_normal.png)}");
      MinniButton->setStyleSheet("QPushButton{background:rgb(50,50,50);border:0px;}\
                                QPushButton{border-image:url(:/image/image/mini_normal.png)}\
                                QPushButton:hover{border-image:url(:/image/image/mini_pressed.png)}");
}

