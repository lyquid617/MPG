#include "Notification/notification.h"
#include "viewmodel.h"

class UpdateInfoNotification : public Notification
{
private:
    std::shared_ptr<ViewModel> vm;
public:
    UpdateInfoNotification(std::shared_ptr<ViewModel> vm):vm(vm){}
    void exec_add_music(void* a){
        QString s = *((QString*)(a));
        vm->AcceptNotify(s);
    }

    void exec_delete_music(void* a){
        int s = *((int*)(a));
        vm->AcceptNotify(s);
   }

};
