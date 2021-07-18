#ifndef DELETEMUSICCOMMAND_H
#define DELETEMUSICCOMMAND_H

#include "Commands/command.h"
#include "ViewModel/viewmodel.h"

class DeleteMusicCommand:public Command
{
private:
    //QUrl url;
    std::shared_ptr<ViewModel> vm;

public:
    DeleteMusicCommand(std::shared_ptr<ViewModel> vm):vm(vm){}
    void exec(void* a,int i);
};

#endif // DELETEMUSICCOMMAND_H
