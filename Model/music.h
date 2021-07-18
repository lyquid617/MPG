#ifndef MUSIC_H
#define MUSIC_H
#include <QUrl>

class Music
{
public:
    Music(){}
    Music(QUrl &urli):url(urli){}
    QUrl getUrl(){
        return url;
    }
    QString get_title(){
        return title;
    }

private:
    QUrl url;
    QString author;
    //歌曲名
    QString title;
    //时长
    qint64 duration;
    //唱片集
    QString albumTitle;
    //比特率
    int audioBitRate;

    void refreshInfo();
};

#endif // MUSIC_H
