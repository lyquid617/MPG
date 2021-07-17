#include "addmusiccommand.h"

void AddMusicCommand::exec(QUrl &urli){
    //qDebug() <<"addmusiccommand\n";
    vm->exec_addMusic_command(urli);
}
