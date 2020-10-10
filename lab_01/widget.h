#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPaintEvent>
#include<QLabel>
#include<QDoubleSpinBox>
#include <QPointF>

class QDoubleSpinBox;

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


protected:
    void paintEvent(QPaintEvent* );

private:
    const double Max_a = 500.0;
    QLabel *lblOX, *lblOY, *lblO0;
    QDoubleSpinBox *Box_step=nullptr, *Box_a = nullptr;
    double function(double, double);

private slots:
    void redrawOnValueChange(double);

};
#endif // WIDGET_H
