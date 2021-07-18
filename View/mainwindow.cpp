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

    //lyq changed the ctor

    ui->volumeSlider->setHidden(true);

    //attention

    init_player();
    update_view_notification = std::static_pointer_cast<Notification, UpdateViewNotification>(std::shared_ptr<UpdateViewNotification>(new UpdateViewNotification(std::shared_ptr<MainWindow>(this))));

}

MainWindow::~MainWindow()
{
    delete ui;
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


    connect(player, &QMediaPlayer::stateChanged, this, [=]()
    {
        qDebug() <<"the program crashed?"<<endl;

        //频率为1s刷新一次，可能导致最后一秒的进度没算进去
        if(player->state() == QMediaPlayer::PlayingState)slidertimer->start(1000);
        else slidertimer->stop();
    });

    connect(slidertimer, &QTimer::timeout, this, [=]()
    {
        int progress = player->position();
        ui->positionSlider->setValue(progress * ui->positionSlider->maximum() / player->duration());

        ui->playprogress->setText(formatTime(player->position()) + " / " + formatTime(player->duration()));

    });
    //connections
    //connect(ui->Pause,&QPushButton::clicked,this,&MainWindow::on_Pause_clicked);
    connect(player,&QMediaPlayer::stateChanged,this,&MainWindow::updatePauseButton);

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
    switch (list_row) {
    case 0: tmp = ui->favor;break;
    case 1: tmp = ui->local;break;
    case 2: tmp = ui->history;break;

    }
    for(int i = 0;i<lst.size();i++){
        tmp->setRowCount(i+1);
        //just simply slice the Url, you can do it further by analyse the Url
        QString s = lst[i];
        QTableWidgetItem *itemName = new QTableWidgetItem(s.mid(s.lastIndexOf("/")+1));

        itemName->setFlags((Qt::ItemFlag)32);
        tmp->setItem(i, 0, itemName);

    }
    //单元格大小设置
    tmp->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
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
//    updateInfo();
}
void MainWindow::on_skipbackward_clicked()
{
    playlist->previous();
    //playlist->previousIndex();
 //   updateInfo();
}

void MainWindow::on_Pause_clicked()
{
    switch (player->state()) {
    case QMediaPlayer::PlayingState:
        player->pause();
        break;
    case QMediaPlayer::PausedState:
        player->play();
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
    QString info="";
    QString author = player->metaData(QStringLiteral("Author")).toStringList().join(",");
    info.append(author);
    QString title = player->metaData(QStringLiteral("Title")).toString();
    QString albumTitle = player->metaData(QStringLiteral("AlbumTitle")).toString();
    info.append(" - "+title);
    qDebug() << info <<endl;
    //info.append(" ["+formatTime(player->duration())+"]");
    ui->musicname->setText(info);
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
           //addMusic(urls[i]);
           qDebug() << urls[i]<<endl;
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
        ui->favor->setHidden(0-currentRow);
        ui->local->setHidden(1-currentRow);
        ui->history->setHidden(2-currentRow);
}
