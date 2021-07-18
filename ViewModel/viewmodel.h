#ifndef VIEWMODEL_H
#define VIEWMODEL_H

#include "Model/musiclist.h"
#include "Notification/notification.h"

enum LIST{
    FAVOR = 1,
    LOCAL,
    HISTORY
};
class Command;
class ViewModel
{
private:
    std::shared_ptr<MusicList> localmusic;
    std::shared_ptr<MusicList> favormusic;
    std::shared_ptr<MusicList> history;

    std::shared_ptr<Notification> update_view_notification;
    std::shared_ptr<Command> addMusic_command;
    std::shared_ptr<Command> deleteMusic_command;
    std::shared_ptr<Notification> update_info_notification;
public:
    ViewModel();
    void exec_addMusic_command(void* a,int i);
    void exec_deleteMusic_command(void* a,int i);
    //void bind(std::shared_ptr<MusicList>);
    void bind(std::shared_ptr<MusicList>,std::shared_ptr<MusicList>,std::shared_ptr<MusicList>);



    std::shared_ptr<Command> get_addMusic_command();
    std::shared_ptr<Command> get_deleteMusic_command();
    //QMediaPlaylist* get_playlist();
    void set_update_view_notification(std::shared_ptr<Notification>);
    std::shared_ptr<Notification> get_update_info_notification();
       void AcceptNotify(QString &qs);
       void AcceptNotify(int s);

};


#endif // VIEWMODEL_H
