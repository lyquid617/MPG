#ifndef MUSICLIST_H
#define MUSICLIST_H
#include "music.h"
#include <QVector>
#include "Notification/notification.h"


using namespace std;
class MusicList
{
private:
    QVector<Music> musics;
    std::shared_ptr<Notification> update_info_notification;

    //QMediaPlaylist* Playlist;
public:
    MusicList();
    //add
    void addMusic(QUrl &url);

    //delete
    void deleteMusic(int index);


    void clear();
    void set_update_info_notification(shared_ptr<Notification> noti);
    //void notify();
};



#endif // MUSICLIST_H
