#include "musiclist.h"

MusicList::MusicList()
{

}


void MusicList::addMusic(QUrl &url){

    musics.push_back(Music(url));
    QString q = url.toString();
    QString *p = &q;
    update_info_notification->exec_add_music(p);
    //notify();

}

void MusicList::deleteMusic(int index){

    musics.remove(index);
    update_info_notification->exec_delete_music(&index);
}





void MusicList::set_update_info_notification(shared_ptr<Notification> noti){
    update_info_notification = noti;
}

