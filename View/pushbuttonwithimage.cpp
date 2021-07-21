#include "pushbuttonwithimage.h"

PushButtonWithImage::PushButtonWithImage(QWidget *parent):QPushButton(parent)
{
    pix = QPixmap(":/image/image/album.png");


}


void PushButtonWithImage::setPixmap(QPixmap p){

    pix = p;

}

void PushButtonWithImage::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawPixmap(0,0,128,128,pix);

}
