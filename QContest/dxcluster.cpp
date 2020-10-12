#include "dxcluster.h"
#include "ui_dxcluster.h"
#include <QColorDialog>

DxCluster::DxCluster(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DxCluster)
{
    ui->setupUi(this);
}

DxCluster::~DxCluster()
{
    delete ui;
}

void DxCluster::Connect()
{
    this->bConnected = true;
    ui->btConnect->setText("Disconnect");

}
void DxCluster::Disconnect()
{
    this->bConnected= false;
    ui->btConnect->setText("Connect");

}


void DxCluster::on_btConnect_clicked()
{
    qDebug() << "Button Pressed";
    if (!this->bConnected)
    {
        this->Connect();
        qDebug() << "Disconnect from "+ui->tNode->toPlainText();

    }
    else
    {
        this->Disconnect();
         qDebug() << "Connect to "+ui->tNode->toPlainText();
    }
}
