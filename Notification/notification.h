#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QString>

class Notification
{
public:
    Notification();
    virtual void exec_add_music(void *) = 0;
    virtual void exec_delete_music(void *)=0;
};



#endif // NOTIFICATION_H
