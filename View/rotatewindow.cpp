#include "rotatewindow.h"
#include "ui_rotatewindow.h"

RotateWindow::RotateWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RotateWindow)
{
    ui->setupUi(this);

}

RotateWindow::~RotateWindow()
{
    delete ui;
}


//void RotateWindow::setimage(QPixmap img){
//    //to be continued
//    ui->btn->setPixmap(img);
//}

//slot
void RotateWindow::showfull(){

    emit fullshow(false);
    cover->hide();

}


void RotateWindow::paintEvent(QPaintEvent* event){
//    Q_UNUSED(event);
//    QPainter painter_mainback(this);
//    painter_mainback.setPen(Qt::NoPen);
//    painter_mainback.setBrush(Qt::red);
//    painter_mainback.drawRect(0,0,this->width(),this->height());
}

void RotateWindow::on_btn_clicked(){
    if(isfull == false){
        emit fullshow(true);
        //中途去做一个别的slot
        isfull = true;
        if(cover){
            cover->show();
        }else{
            //albumcover->show();
            cover = new QWidget(this);
            //the last para: this->y + y + para = 1300
            cover->setGeometry(0,0,this->width(),this->height());
            //change into a 更好看的color
            cover->setStyleSheet("QWidget{background-color: rgb(42, 42, 42);}");
            cover->show();
            if(albumcover){
                albumcover->show();
            }else{
                albumcover = new RoundImageWidget(cover);
                albumcover->setGeometry(250,150,256,256);
                albumcover->show();
            }

            if(stylus){
                stylus->show();
            }else{
                stylus = new IrregularImageWidget(cover);
                stylus->setGeometry(225,-50,300,300);
                stylus->show();
            }

        }
    }else{
        isfull = false;
        emit fullshow(false);
    }
}


//需要把btn迁移出去

