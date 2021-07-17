#include "viewmodel.h"
#include "ViewModel/addmusiccommand.h"
#include "ViewModel/deletemusiccommand.h"
#include "Commands/command.h"
#include "ViewModel/updateinfonotification.h"

ViewModel::ViewModel()
{
    addMusic_command = std::static_pointer_cast<Command, AddMusicCommand>(std::shared_ptr<AddMusicCommand>(new AddMusicCommand(std::shared_ptr<ViewModel>(this))));
    deleteMusic_command = std::static_pointer_cast<Command, DeleteMusicCommand>(std::shared_ptr<DeleteMusicCommand>(new DeleteMusicCommand(std::shared_ptr<ViewModel>(this))));
    update_info_notification = std::static_pointer_cast<Notification, UpdateInfoNotification>(std::shared_ptr<UpdateInfoNotification>(new UpdateInfoNotification(std::shared_ptr<ViewModel>(this))));

}

void ViewModel::bind(std::shared_ptr<MusicList> msc){
    musiclist = msc;

}

std::shared_ptr<Command> ViewModel::get_addMusic_command(){
    return addMusic_command;
}
std::shared_ptr<Command> ViewModel::get_deleteMusic_command(){
    return deleteMusic_command;
}

//TODO::
void ViewModel::exec_addMusic_command(void* a){
    QUrl tmp = *((QUrl*)a);
    musiclist->addMusic(tmp);
}

void ViewModel::exec_deleteMusic_command(void* a){
    int tmp = *((int*)a);
    musiclist->deleteMusic(tmp);
}


void ViewModel::set_update_view_notification(std::shared_ptr<Notification>  notification){
    update_view_notification = notification;
}

std::shared_ptr<Notification> ViewModel::get_update_info_notification(){
    return update_info_notification;
}


void ViewModel::AcceptNotify(QString &qs){
    update_view_notification->exec_add_music(&qs);
}

void ViewModel::AcceptNotify(int qs){
    update_view_notification->exec_delete_music(&qs);
}







