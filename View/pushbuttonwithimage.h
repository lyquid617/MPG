#ifndef PUSHBUTTONWITHIMAGE_H
#define PUSHBUTTONWITHIMAGE_H
#include <QPushButton>
#include <QWidget>
#include <QPixmap>
#include <QPainter>
#include <QPaintEvent>



class PushButtonWithImage : public QPushButton
{

public:
    explicit PushButtonWithImage(QWidget *parent = 0);
    QPixmap pix;

    void setPixmap(QPixmap p);
private:
    void paintEvent(QPaintEvent *event);

};

#endif // PUSHBUTTONWITHIMAGE_H
