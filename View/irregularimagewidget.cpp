#include "IrregularImageWidget.h"

IrregularImageWidget::IrregularImageWidget(QWidget *parent) : QWidget(parent)
{
    m_rotateAngle = 0.0;

    QString backgroundImageName(":/image/image/stylus.png");
    bool isLoadOk = m_backgroundImage.load(backgroundImageName);
    if (!isLoadOk) {
        qDebug()<< "load" << backgroundImageName << "failed !";
    }
}



void IrregularImageWidget::startRotateAnimation()
{
    if (nullptr ==  m_timer) {
        // 通过定时器去旋转图片，可根据自身需求去设定旋转速度
        //speed 是频率
        int speed = 15;
        qreal angle = 0.5;

        m_timer = new QTimer(this);
        m_timer->setInterval(speed);

        connect(m_timer, &QTimer::timeout, [=]() {
            if(working) m_rotateAngle += angle;
            else m_rotateAngle -= angle;
            //qDebug() << m_rotateAngle <<endl;
            if (m_rotateAngle >= 30.0 || m_rotateAngle <= 0.0) {
                m_timer->stop();
                //return ;
            }
            repaint();
        });

    }
    m_timer->start();
    working = !working;

}




void IrregularImageWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    if(!m_backgroundImage.isNull()){

       // 中心点
       int centerPosW = width() >> 1;
       int centerPosH = height() >> 1;

       QPainter painter(this);

       //QPainterPath path;
       //int round = qMin(width(), height());
       //path.addEllipse(0, 0, round, round);
       //painter.setClipPath(path);

       // 设置起点
       painter.translate(centerPosW, centerPosH);
       // 开始旋转
       painter.rotate(m_rotateAngle);
       // 恢复起点位置，即左上角(0，0)
       painter.translate(-centerPosW, -centerPosH);

       // 绘制图片
       painter.drawPixmap(-1, -1, width()+2, height() + 2, m_backgroundImage);
    }
}
