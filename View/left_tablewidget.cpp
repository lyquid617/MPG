#include "left_tablewidget.h"

#include <QTableWidget>

//left_tablewidget::left_tablewidget(QWidget *parent) :QTableWidget(parent)
//{
//    setCursor(Qt::PointingHandCursor);
//    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
//    setFrameShape(QFrame::NoFrame);
//    setFocusPolicy(Qt::NoFocus);
//    setSelectionMode(QAbstractItemView::SingleSelection);
//    setShowGrid(false);
//    setStyleSheet("QTableView{background-color:rgb(239,240,220);}\
//                            QTableView::item{border:none;}");
//    setStyleSheet("selection-background-color:rgb(62,55,55);\
//                            background-color:rgb(52,53,44);");
//    setColumnCount(1);
//    setRowCount(1);
//    for(int i=0;i<=0;i++)
//    {
//        setColumnWidth(0,10);
//        setColumnWidth(1,250);
//        setRowHeight(i,50);
//    }

//    label0=new QLabel(this);
//    label0->setFixedSize(55,35);
//    label0->setScaledContents(true);
//    QTableWidgetItem *item1=new QTableWidgetItem("              本地音乐");
//    item1->setTextColor(Qt::white);
//    this->setItem(1,1,item1);
//    setEditTriggers(QAbstractItemView::NoEditTriggers);
//    setSelectionBehavior(QAbstractItemView::SelectRows);
//    verticalHeader()->setVisible(false);
//    horizontalHeader()->setVisible(false);
//    setCellWidget(1,1,label0);
//    show();
//}

left_tablewidget::left_tablewidget(QWidget *parent) :QTableWidget(parent)
{
    setCursor(Qt::PointingHandCursor);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFrameShape(QFrame::NoFrame);
    setFocusPolicy(Qt::NoFocus);
    setSelectionMode(QAbstractItemView::SingleSelection);
    setShowGrid(false);
    setStyleSheet("QTableView{background-color:rgb(239,240,220);}\
                            QTableView::item{border:none;}");
    setStyleSheet("selection-background-color:rgb(62,55,55);\
                            background-color:rgb(43,43,43);");
    setColumnCount(2);
    setRowCount(2);
    for(int i=0;i<=1;i++)
    {
        setColumnWidth(0,10);
        setColumnWidth(1,250);
        setRowHeight(i,50);
    }

    setRowHeight(0,35);
    recommendMusicLabel=new QLabel(this);
    recommendMusicLabel->setText("   我的音乐");
    QPalette pal;
    pal.setColor(QPalette::Text,Qt::white);
    recommendMusicLabel->setPalette(pal);
    recommendMusicLabel->setFixedWidth(260);
    recommendMusicLabel->setFixedHeight(35);
    label00=new QLabel(this);
//     label00->setPixmap(QPixmap(":/image/image/redLine.jpg"));
    label0=new QLabel(this);
     label0->setPixmap(QPixmap(":/image/image/findMusic.png"));
    label0->setFixedSize(0,0);
    QTableWidgetItem *item1=new QTableWidgetItem("              本地音乐");
    item1->setTextColor(Qt::white);
    this->setItem(1,1,item1);
    setEditTriggers(QAbstractItemView::NoEditTriggers);
    setSelectionBehavior(QAbstractItemView::SelectRows);
    verticalHeader()->setVisible(false);
    horizontalHeader()->setVisible(false);
    setCellWidget(0,1,recommendMusicLabel);
    setCellWidget(1,1,label0);

    show();
}
