#include "deletemusiccommand.h"

void DeleteMusicCommand::exec(void* a){
    //qDebug() <<"addmusiccommand\n";
    vm->exec_deleteMusic_command(a);
}
