#ifndef DXCLUSTER_H
#define DXCLUSTER_H

#include <QDialog>
#include <QDebug>
#include "myqtutils.h"

namespace Ui {
class DxCluster;
}

class DxCluster : public QDialog
{
    Q_OBJECT

public:
    explicit DxCluster(QWidget *parent = nullptr);
    void Connect();
    void Disconnect();
    ~DxCluster();

private slots:
    void on_btConnect_clicked();

private:
    MyQTUtils *myUtils;
    Ui::DxCluster *ui;
    bool bConnected=false;
};

#endif // DXCLUSTER_H
