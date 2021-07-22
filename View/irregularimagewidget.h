#ifndef IRREGULARIMAGEWIDGET_H
#define IRREGULARIMAGEWIDGET_H


#include <QWidget>
#include <QTimer>
#include <QPainter>
#include <QDebug>


class QTimer;

class IrregularImageWidget : public QWidget
{
    Q_OBJECT
public:
    explicit IrregularImageWidget(QWidget *parent = nullptr);

    void startRotateAnimation();


protected:
    virtual void paintEvent(QPaintEvent *event) override;

private:
    qreal m_rotateAngle = 0;

    bool working = false;

    QPixmap m_backgroundImage;

    QTimer *m_timer = nullptr;
};


#endif // IRREGULARIMAGEWIDGET_H


