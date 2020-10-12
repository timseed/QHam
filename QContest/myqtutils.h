#ifndef MYQTUTILS_H
#define MYQTUTILS_H

#include <QWidget>

class MyQTUtils : public QWidget
{
    Q_OBJECT
public:
    explicit MyQTUtils(QWidget *parent = nullptr);
    QString GetColor(QString colour);
signals:

};

#endif // MYQTUTILS_H
