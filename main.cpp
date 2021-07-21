#include "View/mainwindow.h"
#include <QApplication>
#include <App/app.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont f("Microsoft YaHei");
    a.setFont(f);
    App* app = new App();
    app->run();


    return a.exec();
}
