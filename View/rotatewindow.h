#ifndef ROTATEWINDOW_H
#define ROTATEWINDOW_H

#include <QWidget>
#include <QPixmap>
#include "View/roundimagewidget.h"
#include "View/pushbuttonwithimage.h"

namespace Ui {
class RotateWindow;
}

class RotateWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RotateWindow(QWidget *parent = 0);
    ~RotateWindow();
    void setimage(QPixmap img);
    //void showbtn();
    RoundImageWidget * albumcover = NULL;
    void on_btn_clicked();

protected slots:
    void showfull();

signals:
    void fullshow(bool show);
protected:
    void paintEvent(QPaintEvent* event);


private:
    Ui::RotateWindow *ui;

    bool isfull = false;
    QWidget *cover = NULL;

};

#endif // ROTATEWINDOW_H

