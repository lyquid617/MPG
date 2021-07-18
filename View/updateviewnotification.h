#ifndef UPDATEVIEWNOTIFICATION_H
#define UPDATEVIEWNOTIFICATION_H

#include "Notification/notification.h"
#include "View/mainwindow.h"

class UpdateViewNotification : public Notification{
private:
    std::shared_ptr<MainWindow> window;
    QStringList lst;

public:
    UpdateViewNotification(std::shared_ptr<MainWindow> m):window(m){}
    void exec_add_music(void* a){
        QString s = *((QString*)(a));
        lst.push_back(s);
        window->update(lst);
    }
    void exec_delete_music(void* a){
        int s = *((int*)(a));
        lst.removeAt(s);
        window->update(lst);
    }
};
#endif // UPDATEVIEWNOTIFICATION_H
