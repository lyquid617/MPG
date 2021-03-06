#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "View/updateviewnotification.h"

//a tool function
QString MainWindow::formatTime(int ms)
{
    int ss = 1000;
    int mi = ss * 60;
    int hh = mi * 60;
    int dd = hh * 24;

    long day = ms / dd;
    long hour = (ms - day * dd) / hh;
    long minute = (ms - day * dd - hour * hh) / mi;
    long second = (ms - day * dd - hour * hh - minute * mi) / ss;
    //long milliSecond = ms - day * dd - hour * hh - minute * mi - second * ss;

    //QString hou = QString::number(hour,10);
    QString min = (QString::number(minute,10)).size() == 1? "0"+QString::number(minute,10):QString::number(minute,10);
    QString sec = (QString::number(second,10)).size() == 1? "0"+QString::number(second,10):QString::number(second,10);
    //QString msec = QString::number(milliSecond,10);
    //qDebug() << "minute:" << min << "second" << sec << "ms" << msec <<endl;

    return min + ":" + sec ;
}



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->local->setColumnCount(1);
    ui->local->setColumnWidth(0,961);
    //lyq changed the ctor

    ui->volumeSlider->setHidden(true);
    setFixedSize(1300,800);
    setWindowFlags(Qt::FramelessWindowHint|windowFlags());//实现无边框 $
    topwidget=new QWidget(this);
    settopWidget(topwidget);
    objectWidget=new Qbjectwidget(topwidget);
    objectWidget->setGeometry(940,22,360,48);
    leftwidget=new QWidget(this);
    setleftWidget(leftwidget);
    redwidget=new QWidget(this);
    setredWidget(redwidget);
    lefttableWidget=new left_tablewidget(leftwidget);
    lefttableWidget->setGeometry(0,0,260,597);
    connect(lefttableWidget,&QTableWidget::currentCellChanged,ui->stackedWidget,&QStackedWidget::setCurrentIndex);
    init_player();
    wangyi_label=new QLabel(this);
    QPixmap pix(":/image/image/wangyiyunicon .png");
    settoplightIcon(wangyi_label,pix);
    ui->local->setFocusPolicy(Qt::NoFocus);
    ui->local->setFont(QFont("Fira Code Retina"));
    ui->local->setAlternatingRowColors(true);
    ui->local->setFrameShape(QFrame::NoFrame);
    QStringList headers;
    headers << QStringLiteral("");
    ui->local->setHorizontalHeaderLabels(headers);
    ui->local->horizontalHeader()->setStyleSheet("QHeaderView::section{background:black;}");
    ui->local->horizontalHeader()->setFixedHeight(1);
    ui->backGround2->setFrameShape(QFrame::NoFrame);
    ui->albumcover->setPixmap(QPixmap(":/image/image/album.png"));
    rotatewindow = new RotateWindow(this);
    rotatewindow->setGeometry(0,this->height()-140,10,10);
    connect(rotatewindow,&RotateWindow::fullshow,this,&MainWindow::albumcoverResize);



    update_view_notification = std::static_pointer_cast<Notification, UpdateViewNotification>(std::shared_ptr<UpdateViewNotification>(new UpdateViewNotification(std::shared_ptr<MainWindow>(this))));
    connect(objectWidget->closeButton,SIGNAL(clicked(bool)),this,SLOT(closeMainwindow()));
    connect(objectWidget->MinButton,SIGNAL(clicked(bool)),this,SLOT(minMainwindow()));
    connect(objectWidget->MinniButton,SIGNAL(clicked(bool)),this,SLOT(begainMinistyle()));
}

void MainWindow::settopWidget(QWidget *widget)
{
    topwidget->setGeometry(0,0,1300,65);
    QPalette pal(widget->palette());
    pal.setColor(QPalette::Background,QColor(50,50,50));
    widget->setAutoFillBackground(true);
    widget->setPalette(pal);
    widget->show();
}

void MainWindow::setredWidget(QWidget *widget)
{
    redwidget->setGeometry(0,65,1300,4);
    QPalette pal(widget->palette());
    pal.setColor(QPalette::Background,QColor(161,11,11));
    widget->setAutoFillBackground(true);
    widget->setPalette(pal);
    widget->show();
}
void MainWindow::setleftWidget(QWidget *widget)
{
    widget->setGeometry(0,69,240,591);//661
    QPalette pal(widget->palette());
    pal.setColor(QPalette::Background,QColor(43,43,43));
    widget->setAutoFillBackground(true);
    widget->setPalette(pal);
    widget->show();
}

void MainWindow::settoplightIcon(QLabel *label, QPixmap pix)
{
    wangyi_label->setPixmap(pix);
    label->setGeometry(0,0,pix.width(),pix.height());
    label->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeMainwindow()
{
    this->setMinimumSize(0,0);
   QPropertyAnimation *animation=new QPropertyAnimation(this,"geometry");
   animation->setDuration(500);
   animation->setStartValue(geometry());
   animation->setEndValue(QRect(geometry().x(),geometry().y(),0,geometry().height()));
   connect(animation,SIGNAL(finished()),this,SLOT(close()));
   animation->start(QAbstractAnimation::DeleteWhenStopped);
//   lrcshowwidget->close();
}
void MainWindow::minMainwindow()
{
    showMinimized();
}

void MainWindow::begainMinistyle()
{
    this->hide();
    trayIcon=new QSystemTrayIcon(this);
    QIcon icon=QIcon(":/image/image/wangyimini.png");
    trayIcon->setIcon(icon);
    trayIcon->setToolTip("网易云音乐");
    connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(creativeTrayivon(QSystemTrayIcon::ActivationReason)));
    trayIcon->show();
}

void MainWindow::creativeTrayivon(QSystemTrayIcon::ActivationReason reason)
{
    menu=new QMenu(this);
    showMainAction=new QAction(this);
    showMainAction->setText("显示主界面");
    closeMainAction=new QAction(this);
    closeMainAction->setText(tr("退出"));
    menu->addAction(showMainAction);
    menu->addSeparator();
    menu->addAction(closeMainAction);
    connect(showMainAction,SIGNAL(triggered(bool)),this,SLOT(show()));
    connect(closeMainAction,SIGNAL(triggered(bool)),this,SLOT(close()));
    trayIcon->setContextMenu(menu);
    switch (reason) {
    case QSystemTrayIcon::DoubleClick:
        this->show();
        break;
    default:
        break;
    }
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->pos().y()<69)
    {
        event->ignore();
        if(event->button()==Qt::LeftButton)
        {
            m_pressed=true;
            m_point=event->pos();
        }
    }

}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->pos().y()<69)
    {
            if(m_pressed)
            {
                move(event->pos()-m_point+pos());
            }
    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event);
     if(event->pos().y()<69)
     {
         m_pressed=false;
     }
}
void MainWindow::closeEvent(QCloseEvent *event)
{
    Q_UNUSED(event);
}

void MainWindow::init_player(){

    //init the player
    player = new QMediaPlayer();

    playlist = new QMediaPlaylist();
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    player->setPlaylist(playlist);

    player->setVolume(80);

    //a timer will be implemented in the following code
    QTimer * slidertimer = new QTimer(this);
    //修改精度，不知道是否必要
    slidertimer->setTimerType(Qt::PreciseTimer);


    //roundImageWidget = new RoundImageWidget(this);
    //roundImageWidget->setGeometry(100, 100, 300, 300);




    connect(player, &QMediaPlayer::stateChanged, this, [=]()
    {
        //频率为1s刷新一次，可能导致最后一秒的进度没算进去
        if(player->state() == QMediaPlayer::PlayingState)slidertimer->start(500);
        else slidertimer->stop();

    });

    connect(slidertimer, &QTimer::timeout, this, [=]()
    {
        int progress = player->position();
        ui->positionSlider->setValue(progress);

        ui->playprogress->setText(formatTime(player->position()) + " / " + formatTime(player->duration()));

    });
    //connections
    //connect(ui->Pause,&QPushButton::clicked,this,&MainWindow::on_Pause_clicked);
    connect(player,&QMediaPlayer::stateChanged,this,&MainWindow::updatePauseButton);
    //this signal have some problem, though the program can run
    connect(player,&QMediaPlayer::metaDataAvailableChanged,this,&MainWindow::updateInfo);


}



void MainWindow::set_addMusic_command(std::shared_ptr<Command> cmd){
    addmusiccommand = cmd;
}

void MainWindow::set_deleteMusic_command(std::shared_ptr<Command> cmd){
    deletemusiccommand = cmd;
}

std::shared_ptr<Notification> MainWindow::get_update_notification(){
    return update_view_notification;
}

void MainWindow::update(QStringList lst){

    QTableWidget *tmp = ui->local;
    tmp->setRowCount(lst.size());
    for(int i = 0;i<lst.size();i++){
        tmp->setRowHeight(i, 35);
        //just simply slice the Url, you can do it further by analyse the Url
        QString s = lst[i];
        QTableWidgetItem *itemName = new QTableWidgetItem(s.mid(s.lastIndexOf("/")+1));
        itemName->setFlags((Qt::ItemFlag)32);
        tmp->setItem(i, 0, itemName);
    }
    //单元格大小设置
    //tmp->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->musictable->horizontalHeader()->setSectionResizeMode(QHeaderView::);
}

//loop是顺序播放不会停，sequential是顺序放完一遍就停了
void MainWindow::on_playmode_clicked()
{
    switch (playlist->playbackMode()) {
    case QMediaPlaylist::Loop:
        playlist->setPlaybackMode(QMediaPlaylist::Random);
        ui->playmode->setStyleSheet(RandomStyle());
        break;
    case QMediaPlaylist::Random:
        playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop);
        ui->playmode->setStyleSheet(OneloopStyle());
        break;
    case QMediaPlaylist::CurrentItemInLoop:
        playlist->setPlaybackMode(QMediaPlaylist::Loop);
        ui->playmode->setStyleSheet(LoopStyle());
        break;
    default:
        break;
    }
}

//check playmode to decide the next music. shuffle or sequential
//上一行当我没说
void MainWindow::on_skipforward_clicked()
{
    playlist->next();

}
void MainWindow::on_skipbackward_clicked()
{
    playlist->previous();

}

void MainWindow::on_Pause_clicked()
{
    switch (player->state()) {
    case QMediaPlayer::PlayingState:
        player->pause();
        if(rotatewindow->albumcover && rotatewindow->stylus){
            rotatewindow->albumcover->stopRotateAnimation();
            rotatewindow->stylus->startRotateAnimation();
        }
        break;
    case QMediaPlayer::PausedState:
        player->play();
        if(rotatewindow->albumcover && rotatewindow->stylus){
            rotatewindow->albumcover->startRotateAnimation();
            rotatewindow->stylus->startRotateAnimation();
        }
        break;
    case QMediaPlayer::StoppedState:
        //do nothing
        break;
    default:
        break;
    }
}

//in this slot we update the music name and further cover
void MainWindow::updateInfo(){

    ui->positionSlider->setRange(0,player->duration());
    //ui->albumcover->setPixmap(QPixmap(":/image/image/album.png"));
    return;
    //盗版音乐的话，metadate是不会available的。
    if(!player->isMetaDataAvailable()){
        //但是ui还是要改
        ui->musicname->setText("pirate muisc");
        //ui->albumcover->setPixmap(QPixmap(":/image/image/album.png"));
        return;
    }
    qDebug() <<player->availableMetaData()<<endl;
    //QUrl url = player->metaData(QMediaMetaData::PosterUrl).value<QUrl>();
    //qDebug() <<url<<endl;


    QString info="";
    QString title = player->metaData(QStringLiteral("Title")).toString();
    QString albumtitle = player->metaData("AlbumTitle").toString();
    //to be modified
    QString singer = player->metaData("ContributingArtist").toString();
    info.append(title);
    info.append(" "+albumtitle);
    info.append(" "+singer);
    qDebug() <<info<<endl;
    ui->musicname->setText(info);

    qDebug() << playlist->currentIndex()<<"  "<<   info  <<endl;

//    QPixmap pix;
//    pix.loadFromData(data);
//    ui->albumcover->setPixmap(pix);


}


void MainWindow::on_playlist_clicked()
{
    //show a child table or window displaying the music list


}

void MainWindow::on_addMusic_clicked()
{
    QFileDialog fileDialog;
    fileDialog.setAcceptMode(QFileDialog::AcceptOpen);
    fileDialog.setFileMode(QFileDialog::ExistingFiles);
    fileDialog.setWindowTitle("add local music");

    QStringList list;list<<"application/octet-stream";
    fileDialog.setMimeTypeFilters(list);

    fileDialog.setDirectory(QStandardPaths::standardLocations(QStandardPaths::MusicLocation).value(0, QDir::homePath()));

    if (fileDialog.exec() == QDialog::Accepted){
       QList<QUrl> urls=fileDialog.selectedUrls();
       QStringList mscnames = fileDialog.selectedFiles();

       for(int i = 0;i<urls.size();i++){
           playlist->addMedia(QUrl(urls[i]));
           addmusiccommand->exec(&urls[i],list_row);
       }
    }
}

void MainWindow::on_deleteMusic_clicked()
{
//        QUrl tmp = playlist->media(selected_row).canonicalUrl();
    if(selected_row!=-1){

        deletemusiccommand->exec(&selected_row,list_row);

        playlist->removeMedia(selected_row);
    }
    selected_row = -1;
}


void MainWindow::on_positionSlider_sliderReleased()
{
    //the range of a music is [0,player->duration()]
    if (player->state() != QMediaPlayer::StoppedState)
        player->setPosition(ui->positionSlider->value() *player->duration()/ui->positionSlider->maximum()  );
}

void MainWindow::on_volume_clicked()
{   //后续应该改成鼠标悬浮显示slider
    if(ui->volumeSlider->isHidden()){
        ui->volumeSlider->setValue(player->volume());
        ui->volumeSlider->setHidden(false);
    }else{
        ui->volumeSlider->setHidden(true);
    }
}

void MainWindow::on_volumeSlider_sliderReleased()
{
    //The range of the volumeSlider is [0,100]
    //The playback volume is scaled linearly, ranging from 0 (silence) to 100 (full volume).
    player->setVolume(ui->volumeSlider->value());

}
//双击播放音乐，单击理论上应该加深背景颜色。这就需要给每个单元格增加背景
void MainWindow::on_local_cellDoubleClicked(int row, int column)
{
    playlist->setCurrentIndex(row);
    player->play();
}

//把图标更新从点击按钮里抽离出来了，因为除了点击按钮，其他操作也可能更新图标
void MainWindow::updatePauseButton()
{
    if(player->state()==QMediaPlayer::PlayingState)
        ui->Pause->setStyleSheet(PlayStyle());
    else
        ui->Pause->setStyleSheet(PauseStyle());
}

void MainWindow::on_local_cellClicked(int row, int column)
{
    selected_row = row;
}

void MainWindow::on_listWidget_currentRowChanged(int currentRow)
{
        list_row = currentRow;
//        ui->favor->setHidden(0-currentRow);
//        ui->local->setHidden(1-currentRow);
//        ui->history->setHidden(2-currentRow);
}

void MainWindow::albumcoverResize(bool isfull){
    if(isfull){
        lefttableWidget->hide();
        rotatewindow->show();
        if(rotatewindow) rotatewindow->setGeometry(0,70,this->width(),this->height()-70-135);
        //qDebug() <<"window resize first : "<<rotatewindow->x()<<" "<<rotatewindow->y()<<endl;

    }else{
        lefttableWidget->show();
        if(rotatewindow) rotatewindow->setGeometry(0,this->height()-130,130,130);
        rotatewindow->hide();
    }


}

void MainWindow::on_albumcover_clicked()
{
    rotatewindow->on_btn_clicked();
    if(player->state()==QMediaPlayer::PlayingState) {
        rotatewindow->albumcover->startRotateAnimation();
        rotatewindow->stylus->startRotateAnimation();
        qDebug() << "cover shown\n";
    }
}

