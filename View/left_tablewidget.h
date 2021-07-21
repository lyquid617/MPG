#ifndef LEFT_TABLEWIDGET_H
#define LEFT_TABLEWIDGET_H

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include <QTableWidget>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QLabel>
#include <QPalette>



//class left_tablewidget : public QTableWidget
//{
//    Q_OBJECT
//public:
//    explicit left_tablewidget(QWidget *parent=0);
//    QLabel *label0;
//};


class left_tablewidget : public QTableWidget
{
    Q_OBJECT
public:
    explicit left_tablewidget(QWidget *parent=0);
    QLabel *recommendMusicLabel;//推荐
    QLabel *label0;
    QLabel *label00;
};
#endif // LEFT_TABLEWIDGET_H
