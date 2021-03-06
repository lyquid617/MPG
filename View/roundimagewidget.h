#ifndef ROUNDIMAGEWIDGET_H
#define ROUNDIMAGEWIDGET_H

#include <QWidget>
#include <QTimer>
#include <QPainter>
#include <QDebug>


class QTimer;

class RoundImageWidget : public QWidget
{
    Q_OBJECT
public:
    explicit RoundImageWidget(QWidget *parent = nullptr);

    void startRotateAnimation();
    void stopRotateAnimation();

protected:
    virtual void paintEvent(QPaintEvent *event) override;

private:
    qreal m_rotateAngle;

    QPixmap m_backgroundImage;

    QTimer *m_timer = nullptr;
};

#endif // ROUNDIMAGEWIDGET_H
