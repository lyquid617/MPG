/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *playcontrol;
    QPushButton *skipbackward;
    QSpacerItem *horizontalSpacer;
    QPushButton *Pause;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *skipforward;
    QPushButton *volume;
    QSlider *positionSlider;
    QPushButton *playmode;
    QLabel *musicname;
    QPushButton *playlist;
    QLabel *playprogress;
    QPushButton *deleteMusic;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableWidget *backGround;
    QWidget *page_2;
    QTableWidget *backGround2;
    QTableWidget *local;
    QPushButton *addMusic;
    QLabel *label;
    QSlider *volumeSlider;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1300, 800);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow\n"
"{\n"
"background-image: url(:/image/image/background.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(480, 690, 291, 61));
        playcontrol = new QHBoxLayout(horizontalLayoutWidget);
        playcontrol->setSpacing(0);
        playcontrol->setContentsMargins(11, 11, 11, 11);
        playcontrol->setObjectName(QStringLiteral("playcontrol"));
        playcontrol->setContentsMargins(0, 0, 0, 0);
        skipbackward = new QPushButton(horizontalLayoutWidget);
        skipbackward->setObjectName(QStringLiteral("skipbackward"));
        skipbackward->setEnabled(true);
        skipbackward->setCursor(QCursor(Qt::PointingHandCursor));
        skipbackward->setAutoFillBackground(false);
        skipbackward->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/image/image/skipbackward.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
""));

        playcontrol->addWidget(skipbackward);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        playcontrol->addItem(horizontalSpacer);

        Pause = new QPushButton(horizontalLayoutWidget);
        Pause->setObjectName(QStringLiteral("Pause"));
        Pause->setCursor(QCursor(Qt::PointingHandCursor));
        Pause->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/image/image/play.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"\n"
"\n"
""));

        playcontrol->addWidget(Pause);

        horizontalSpacer_2 = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        playcontrol->addItem(horizontalSpacer_2);

        skipforward = new QPushButton(horizontalLayoutWidget);
        skipforward->setObjectName(QStringLiteral("skipforward"));
        skipforward->setEnabled(true);
        skipforward->setCursor(QCursor(Qt::PointingHandCursor));
        skipforward->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/image/image/skipforward.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
""));

        playcontrol->addWidget(skipforward);

        playcontrol->setStretch(0, 1);
        playcontrol->setStretch(1, 1);
        playcontrol->setStretch(2, 1);
        playcontrol->setStretch(3, 1);
        playcontrol->setStretch(4, 1);
        volume = new QPushButton(centralWidget);
        volume->setObjectName(QStringLiteral("volume"));
        volume->setGeometry(QRect(1200, 710, 32, 32));
        volume->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-image: url(:/image/image/volume.png);\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
""));
        positionSlider = new QSlider(centralWidget);
        positionSlider->setObjectName(QStringLiteral("positionSlider"));
        positionSlider->setGeometry(QRect(0, 630, 1291, 22));
        positionSlider->setStyleSheet(QLatin1String("\n"
"\n"
"QSlider::add-page:Horizontal#horizontalSlider_music\n"
"{\n"
"	background-color: rgb(69, 69, 70);height:5px;\n"
"}\n"
"QSlider::sub-page:Horizontal#horizontalSlider_music\n"
"{\n"
"	background-color: rgb(255, 0, 0);height:5px;\n"
"}\n"
"QSlider::handle:Horizontal#horizontalSlider_music\n"
"{\n"
"	width:14px;border-image: url(images/point_music.png);margin:-5 px -5px;\n"
"}\n"
"QSlider::groove:Horizontal#horizontalSlider_music\n"
"{\n"
"	background:rgb(0, 255, 0);height:5px;\n"
"}\n"
""));
        positionSlider->setMaximum(240);
        positionSlider->setOrientation(Qt::Horizontal);
        playmode = new QPushButton(centralWidget);
        playmode->setObjectName(QStringLiteral("playmode"));
        playmode->setGeometry(QRect(880, 700, 113, 32));
        playmode->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image:url(:/image/image/repeat.png);\n"
"background-repeat:norepeat;\n"
"background-position:center;\n"
"border:none;\n"
"}\n"
""));
        musicname = new QLabel(centralWidget);
        musicname->setObjectName(QStringLiteral("musicname"));
        musicname->setGeometry(QRect(20, 700, 401, 20));
        playlist = new QPushButton(centralWidget);
        playlist->setObjectName(QStringLiteral("playlist"));
        playlist->setGeometry(QRect(980, 700, 113, 32));
        playlist->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image:url(:/image/image/playlist.png);\n"
"background-repeat:norepeat;\n"
"background-position:center;\n"
"border:none\n"
"\n"
"\n"
"}"));
        playprogress = new QLabel(centralWidget);
        playprogress->setObjectName(QStringLiteral("playprogress"));
        playprogress->setGeometry(QRect(20, 730, 121, 16));
        deleteMusic = new QPushButton(centralWidget);
        deleteMusic->setObjectName(QStringLiteral("deleteMusic"));
        deleteMusic->setGeometry(QRect(220, 670, 91, 31));
        deleteMusic->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image:url(:/image/image/deletemusic.png);\n"
"background-repeat:norepeat;\n"
"background-position:center;\n"
"border:none\n"
"\n"
"\n"
"}"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(220, 60, 1081, 571));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        backGround = new QTableWidget(page);
        backGround->setObjectName(QStringLiteral("backGround"));
        backGround->setGeometry(QRect(30, 0, 1051, 581));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(backGround->sizePolicy().hasHeightForWidth());
        backGround->setSizePolicy(sizePolicy);
        backGround->setStyleSheet(QLatin1String("QTableWidget{\n"
"	background-image: url(:/image/image/mmmmm.jpg);\n"
"\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"background:#C0C0C0;               \n"
"}\n"
"QTableWidget::item:hover {\n"
"background:#A0A0A0;               \n"
"}"));
        backGround->setAlternatingRowColors(true);
        backGround->horizontalHeader()->setDefaultSectionSize(100);
        backGround->horizontalHeader()->setStretchLastSection(true);
        backGround->verticalHeader()->setDefaultSectionSize(30);
        backGround->verticalHeader()->setStretchLastSection(false);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        backGround2 = new QTableWidget(page_2);
        backGround2->setObjectName(QStringLiteral("backGround2"));
        backGround2->setGeometry(QRect(30, 0, 1051, 581));
        sizePolicy.setHeightForWidth(backGround2->sizePolicy().hasHeightForWidth());
        backGround2->setSizePolicy(sizePolicy);
        backGround2->setStyleSheet(QLatin1String("QTableWidget{\n"
"background:#2B2B2B;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"background:#C0C0C0;               \n"
"}\n"
"QTableWidget::item:hover {\n"
"background:#A0A0A0;               \n"
"}"));
        backGround2->setAlternatingRowColors(true);
        backGround2->horizontalHeader()->setDefaultSectionSize(100);
        backGround2->horizontalHeader()->setStretchLastSection(true);
        backGround2->verticalHeader()->setDefaultSectionSize(30);
        backGround2->verticalHeader()->setStretchLastSection(false);
        local = new QTableWidget(page_2);
        local->setObjectName(QStringLiteral("local"));
        local->setGeometry(QRect(80, 200, 961, 371));
        addMusic = new QPushButton(page_2);
        addMusic->setObjectName(QStringLiteral("addMusic"));
        addMusic->setGeometry(QRect(310, 90, 113, 32));
        addMusic->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image:url(:/image/image/addmusic.png);\n"
"background-repeat:norepeat;\n"
"background-position:center;\n"
"border:none\n"
"\n"
"\n"
"}"));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 131, 61));
        label->setStyleSheet(QStringLiteral("image: url(:/image/image/localmusic.png);"));
        stackedWidget->addWidget(page_2);
        volumeSlider = new QSlider(centralWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setGeometry(QRect(1210, 540, 22, 160));
        volumeSlider->setMaximum(100);
        volumeSlider->setOrientation(Qt::Vertical);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        skipbackward->setText(QString());
        Pause->setText(QString());
        skipforward->setText(QString());
        volume->setText(QString());
        playmode->setText(QString());
        musicname->setText(QApplication::translate("MainWindow", "\346\255\214\346\233\262\345\220\215", Q_NULLPTR));
        playlist->setText(QString());
        playprogress->setText(QApplication::translate("MainWindow", "00:00 / 00:00", Q_NULLPTR));
        deleteMusic->setText(QString());
        addMusic->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
