#ifndef APP_H
#define APP_H
#include "View/mainwindow.h"
#include "Model/musiclist.h"
#include "ViewModel/viewmodel.h"

class App
{
private:
    std::shared_ptr<MainWindow> mainwindow;
    std::shared_ptr<MusicList> localmusic;
    std::shared_ptr<MusicList> favormusic;
    std::shared_ptr<MusicList> history;

    std::shared_ptr<ViewModel> viewmodel;

public:
    App();
    void run();
};

#endif // APP_H
