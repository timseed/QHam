#include "myqtutils.h"
#include <QColorDialog>

MyQTUtils::MyQTUtils(QWidget *parent) : QWidget(parent)
{

}


QString MyQTUtils::GetColor(QString colour)
{
    QColor col = QColorDialog::getColor(Qt::red, this);
    if(col.isValid()) {
    QString qss = QString("background-color: %1").arg(col.name());
    return qss;
    }
    return "";

}
