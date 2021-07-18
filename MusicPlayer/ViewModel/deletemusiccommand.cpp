#include "deletemusiccommand.h"

void DeleteMusicCommand::exec(void* a,int i){
    //qDebug() <<"addmusiccommand\n";
    vm->exec_deleteMusic_command(a,i);
}
