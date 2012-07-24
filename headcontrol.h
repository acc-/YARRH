#ifndef HEADCONTROL_H
#define HEADCONTROL_H

#include <QGraphicsView>
#include <QPainter>
#include <QGraphicsTextItem>
#include <QDebug>
#include "headcontrolline.h"
#include "layer2d.h"

class HeadControl : public QGraphicsView
{
    Q_OBJECT
public:
<<<<<<< HEAD
    headControl(QWidget* parent = NULL);
    ~headControl();
    QSize sizeHint() const;
    void setSize(int x_size, int y_size);
    bool getPointsHidden();
=======
    HeadControl(QWidget* parent = NULL);
    ~HeadControl();
>>>>>>> 7e93cc0a9d1ab1d8ad12868a0e0a803f3420b961
private:
    bool pointsHidden;
    int sizeX, sizeY;
    QGraphicsScene* scene;
    QList<HeadControlLine*> controlPoints;
    Layer2D* layer;
    void populateScene(int x, int y);
signals:
    void clicked(QPoint);
    void hovered(QPoint);
public slots:
    void hidePoints(bool);
    void addPrintedPoint(QPointF);
    void resetLayer();
};

#endif // HEADCONTROL_H
