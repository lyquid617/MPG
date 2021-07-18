#include "app.h"

App::App():mainwindow(new MainWindow()),localmusic(new MusicList()),favormusic(new MusicList()),history(new MusicList()),viewmodel(new ViewModel())
{
    //mainwindow->set_playlist(viewmodel->get_playlist());
    viewmodel->bind(localmusic,favormusic,history);
    mainwindow->set_addMusic_command(viewmodel->get_addMusic_command());
    mainwindow->set_deleteMusic_command(viewmodel->get_deleteMusic_command());
    viewmodel->set_update_view_notification(mainwindow->get_update_notification());
    localmusic->set_update_info_notification(viewmodel->get_update_info_notification());
    favormusic->set_update_info_notification(viewmodel->get_update_info_notification());
    history->set_update_info_notification(viewmodel->get_update_info_notification());
}

void App::run(){
    mainwindow->show();
}
