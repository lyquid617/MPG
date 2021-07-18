#include "addmusiccommand.h"

void AddMusicCommand::exec(void* a,int i){
    //qDebug() <<"addmusiccommand\n";
    vm->exec_addMusic_command(a,i);
}
