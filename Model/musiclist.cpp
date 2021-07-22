#include "musiclist.h"
#include <QDebug>

MusicList::MusicList()
{

}


void MusicList::addMusic(QUrl &url){


    QString tmp = url.toString();
    tmp = tmp.right(3);

    if(tmp != "mp3" && tmp != "wav"){
        return ;
    }
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


int MusicList::size(){
    return musics.size();
}


void MusicList::set_update_info_notification(shared_ptr<Notification> noti){
    update_info_notification = noti;
}

