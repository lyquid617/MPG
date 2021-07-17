#include "addmusiccommand.h"

void AddMusicCommand::exec(void* a){
    //qDebug() <<"addmusiccommand\n";
    vm->exec_addMusic_command(a);
}
