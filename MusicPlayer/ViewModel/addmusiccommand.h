#ifndef ADDMUSICCOMMAND_H
#define ADDMUSICCOMMAND_H

#include "Commands/command.h"
#include "ViewModel/viewmodel.h"

class AddMusicCommand:public Command
{
private:
    //QUrl url;
    std::shared_ptr<ViewModel> vm;

public:
    AddMusicCommand(std::shared_ptr<ViewModel> vm):vm(vm){}
    void exec(void* a,int i);
};

#endif // ADDMUSICCOMMAND_H
