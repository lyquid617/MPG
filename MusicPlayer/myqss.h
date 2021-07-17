#ifndef MYQSS_H
#define MYQSS_H
#include<QString>

/*此文件统一存放一些QSS样式代码*/

//播放按钮样式
inline QString PlayStyle()
{
    return "QPushButton"
    "{"
    "background-image:url(:/image/image/pause.png);"
    "background-repeat:no-repeat;"
    "background-position:center center;"
    "border:none;"
    "}";
}
//暂停按钮样式
inline QString PauseStyle()
{
    return "QPushButton"
   "{"
   "background-image:url(:/image/image/play.png);"
   "background-repeat:no-repeat;"
   "background-position:center center;"
   "border:none;"
    "}";
}

inline QString RandomStyle(){
    return "QPushButton"
           "{"
           "background-image:url(:/image/image/shuffle.png);"
           "background-repeat:no-repeat;"
           "background-position:center center;"
           "border:none;"
            "}";
}

inline QString LoopStyle(){
    return "QPushButton"
           "{"
           "background-image:url(:/image/image/repeat.png);"
           "background-repeat:no-repeat;"
           "background-position:center center;"
           "border:none;"
            "}";
}

inline QString OneloopStyle(){
    return "QPushButton"
           "{"
           "background-image:url(:/image/image/repeat1.png);"
           "background-repeat:no-repeat;"
           "background-position:center center;"
           "border:none;"
            "}";
}





#endif // MYQSS_H
