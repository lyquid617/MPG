#include "rotatewindow.h"
#include "ui_rotatewindow.h"

RotateWindow::RotateWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RotateWindow)
{
    ui->setupUi(this);
}

RotateWindow::~RotateWindow()
{
    delete ui;
}
