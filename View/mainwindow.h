#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include <QMainWindow>
#include <QString>
#include <QTimer>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMediaContent>
#include <QMediaMetaData>
#include <QTableWidgetItem>
#include <QListWidgetItem>
#include <QPixmap>
#include <QImage>
#include "myqss.h"
#include <QDir>
#include "Commands/command.h"
#include <QFileDialog>
#include <QStandardPaths>

#include <memory>
#include <View/roundimagewidget.h>

#include<memory>
#include <QMouseEvent>
#include <QPoint>
#include <QPropertyAnimation>
#include <QSystemTrayIcon>
#include <QMenu>
#include "qbjectwidget.h"
#include "left_tablewidget.h"
#include "View/rotatewindow.h"




class Notification;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QWidget *topwidget;
    Qbjectwidget *objectWidget;//关闭等
    QWidget *redwidget;
    QMenu *menu;//托盘菜单
    QAction *showMainAction;//显示界面
    QAction *closeMainAction;//关闭程序
    left_tablewidget *lefttableWidget;
    QWidget *leftwidget;
    QLabel *wangyi_label;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void init_player();

    void set_addMusic_command(std::shared_ptr<Command> cmd);
    void set_deleteMusic_command(std::shared_ptr<Command> cmd);
    std::shared_ptr<Notification> get_update_notification();
    void update(QStringList);
    QString formatTime(int ms);
private:
    void settopWidget(QWidget* widget);//绘制上方界面
    void setleftWidget(QWidget* widget);
    void closeEvent(QCloseEvent *event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);//设置窗体可移动
    void setredWidget(QWidget *widget);//绘制红色线条
    void settoplightIcon(QLabel *label,QPixmap pix);
private slots:
    //automatic generated
    void closeMainwindow();//关闭程序
    void minMainwindow();//最小化程序
    void begainMinistyle();//迷你到托盘
    void creativeTrayivon(QSystemTrayIcon::ActivationReason reason);//小菜单的显示
    void on_skipforward_clicked();

    void on_Pause_clicked();

    void on_skipbackward_clicked();

    void on_playlist_clicked();

    void on_addMusic_clicked();

    void on_deleteMusic_clicked();

    void on_positionSlider_sliderReleased();

    void on_volume_clicked();

    void on_volumeSlider_sliderReleased();

    void on_local_cellDoubleClicked(int row, int column);

    void on_playmode_clicked();

    void on_local_cellClicked(int row, int column);

    void on_listWidget_currentRowChanged(int currentRow);
    //manually added
    void updateInfo();

    void updatePauseButton();

    void albumcoverResize(bool isfull);



    void on_albumcover_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    //RoundImageWidget * roundImageWidget;
    RotateWindow * rotatewindow;

    int selected_row = -1;
    bool m_pressed;
    QPoint m_point;//可移动的点
    int list_row = 1;
    QSystemTrayIcon *trayIcon;//迷你模式

    bool rotate = false;

    std::shared_ptr<Command> addmusiccommand;
    std::shared_ptr<Command> deletemusiccommand;
    std::shared_ptr<Notification> update_view_notification;

};



#endif // MAINWINDOW_H
