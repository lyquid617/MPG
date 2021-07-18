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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
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
    QTableWidget *local;
    QPushButton *playlist;
    QPushButton *addMusic;
    QSlider *volumeSlider;
    QLabel *playprogress;
    QPushButton *deleteMusic;
    QTableWidget *favor;
    QTableWidget *history;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 800);
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
        volume->setGeometry(QRect(1120, 700, 32, 32));
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
        positionSlider->setGeometry(QRect(0, 610, 1200, 22));
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
        local = new QTableWidget(centralWidget);
        if (local->columnCount() < 1)
            local->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        local->setHorizontalHeaderItem(0, __qtablewidgetitem);
        local->setObjectName(QStringLiteral("local"));
        local->setGeometry(QRect(300, 230, 361, 291));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(local->sizePolicy().hasHeightForWidth());
        local->setSizePolicy(sizePolicy);
        local->setStyleSheet(QLatin1String("QTableWidget{\n"
"alternate-background-color:#E0E0E0;\n"
"background:#FFFFFFFF;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"background:#C0C0C0;               \n"
"}\n"
"QTableWidget::item:hover {\n"
"background:#A0A0A0;               \n"
"}"));
        local->setAlternatingRowColors(true);
        local->horizontalHeader()->setDefaultSectionSize(100);
        local->horizontalHeader()->setStretchLastSection(true);
        local->verticalHeader()->setDefaultSectionSize(30);
        local->verticalHeader()->setStretchLastSection(false);
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
        addMusic = new QPushButton(centralWidget);
        addMusic->setObjectName(QStringLiteral("addMusic"));
        addMusic->setGeometry(QRect(460, 180, 113, 32));
        addMusic->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image:url(:/image/image/addmusic.png);\n"
"background-repeat:norepeat;\n"
"background-position:center;\n"
"border:none\n"
"\n"
"\n"
"}"));
        volumeSlider = new QSlider(centralWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setGeometry(QRect(1130, 530, 22, 160));
        volumeSlider->setMaximum(100);
        volumeSlider->setOrientation(Qt::Vertical);
        playprogress = new QLabel(centralWidget);
        playprogress->setObjectName(QStringLiteral("playprogress"));
        playprogress->setGeometry(QRect(20, 730, 121, 16));
        deleteMusic = new QPushButton(centralWidget);
        deleteMusic->setObjectName(QStringLiteral("deleteMusic"));
        deleteMusic->setGeometry(QRect(400, 180, 91, 31));
        deleteMusic->setStyleSheet(QLatin1String("QPushButton{\n"
"background-image:url(:/image/image/deletemusic.png);\n"
"background-repeat:norepeat;\n"
"background-position:center;\n"
"border:none\n"
"\n"
"\n"
"}"));
        favor = new QTableWidget(centralWidget);
        if (favor->columnCount() < 1)
            favor->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        favor->setHorizontalHeaderItem(0, __qtablewidgetitem1);
        favor->setObjectName(QStringLiteral("favor"));
        favor->setGeometry(QRect(300, 230, 361, 291));
        sizePolicy.setHeightForWidth(favor->sizePolicy().hasHeightForWidth());
        favor->setSizePolicy(sizePolicy);
        favor->setStyleSheet(QLatin1String("QTableWidget{\n"
"alternate-background-color:#E0E0E0;\n"
"background:#FFFFFFFF;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"background:#C0C0C0;               \n"
"}\n"
"QTableWidget::item:hover {\n"
"background:#A0A0A0;               \n"
"}"));
        favor->setAlternatingRowColors(true);
        favor->horizontalHeader()->setDefaultSectionSize(100);
        favor->horizontalHeader()->setStretchLastSection(true);
        favor->verticalHeader()->setDefaultSectionSize(30);
        favor->verticalHeader()->setStretchLastSection(false);
        history = new QTableWidget(centralWidget);
        if (history->columnCount() < 1)
            history->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        history->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        history->setObjectName(QStringLiteral("history"));
        history->setGeometry(QRect(300, 230, 361, 291));
        sizePolicy.setHeightForWidth(history->sizePolicy().hasHeightForWidth());
        history->setSizePolicy(sizePolicy);
        history->setStyleSheet(QLatin1String("QTableWidget{\n"
"alternate-background-color:#E0E0E0;\n"
"background:#FFFFFFFF;\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"background:#C0C0C0;               \n"
"}\n"
"QTableWidget::item:hover {\n"
"background:#A0A0A0;               \n"
"}"));
        history->setAlternatingRowColors(true);
        history->horizontalHeader()->setDefaultSectionSize(100);
        history->horizontalHeader()->setStretchLastSection(true);
        history->verticalHeader()->setDefaultSectionSize(30);
        history->verticalHeader()->setStretchLastSection(false);
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(50, 230, 256, 291));
        MainWindow->setCentralWidget(centralWidget);
        horizontalLayoutWidget->raise();
        volume->raise();
        positionSlider->raise();
        playmode->raise();
        musicname->raise();
        playlist->raise();
        addMusic->raise();
        volumeSlider->raise();
        playprogress->raise();
        deleteMusic->raise();
        favor->raise();
        history->raise();
        listWidget->raise();
        local->raise();

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
        QTableWidgetItem *___qtablewidgetitem = local->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\346\255\214\346\233\262", Q_NULLPTR));
        playlist->setText(QString());
        addMusic->setText(QString());
        playprogress->setText(QApplication::translate("MainWindow", "00:00 / 00:00", Q_NULLPTR));
        deleteMusic->setText(QString());
        QTableWidgetItem *___qtablewidgetitem1 = favor->horizontalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\346\210\221\345\226\234\346\254\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = history->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\346\234\200\350\277\221\346\222\255\346\224\276", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\346\210\221\345\226\234\346\254\242", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\346\234\254\345\234\260\351\237\263\344\271\220", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\350\256\260\345\275\225", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
