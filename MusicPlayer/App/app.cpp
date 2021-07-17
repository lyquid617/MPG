#include "app.h"

App::App():mainwindow(new MainWindow()),musiclist(new MusicList()),viewmodel(new ViewModel())
{
    //mainwindow->set_playlist(viewmodel->get_playlist());
    viewmodel->bind(musiclist);
    mainwindow->set_addMusic_command(viewmodel->get_addMusic_command());
    viewmodel->set_update_view_notification(mainwindow->get_update_notification());
    musiclist->set_update_info_notification(viewmodel->get_update_info_notification());
}

void App::run(){
    mainwindow->show();
}
