#ifndef WEATHERWIDGET_H
#define WEATHERWIDGET_H

#include <QWidget>
#include<QStringList>
#include<QHeaderView>
#include<QTableWidget>
#include<QTabWidget>
#include<QMovie>
#include<QPainter>
#include<QPixmap>
#include<QMouseEvent>
#include<QHeaderView>
#include<QTabBar>
#include"weather.h"

namespace Ui {
class WeatherWidget;
}

class WeatherWidget : public QWidget
{
    Q_OBJECT

public:
    explicit WeatherWidget(QWidget *parent = 0);
    ~WeatherWidget();

private slots:
    void on_pushButtonMini_clicked();

    void on_pushButtonDestroy_clicked();

    void GetWeatherFailed();

    void ShowWeaher();

    void on_pushButtonQuery_clicked();
private:
    void mousePressEvent(QMouseEvent *event); //鼠标点击事件  //窗口移动
    void mouseMoveEvent(QMouseEvent *event);  //鼠标移动事件  //窗口移动
    void mouseReleseEvent(QMouseEvent *); //鼠标松开事件  //窗口移动
    bool isMouseClick;  //是否被按下
    QPoint mousePoint; //鼠标位置

    Weather *weather;

    bool isgetData=false;
    Ui::WeatherWidget *ui;

};

#endif // WEATHERWIDGET_H

