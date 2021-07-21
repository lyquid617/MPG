#ifndef ROTATEWINDOW_H
#define ROTATEWINDOW_H

#include <QMainWindow>

namespace Ui {
class RotateWindow;
}

class RotateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RotateWindow(QWidget *parent = 0);
    ~RotateWindow();

private:
    Ui::RotateWindow *ui;
};

#endif // ROTATEWINDOW_H
