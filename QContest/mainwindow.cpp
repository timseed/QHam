#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dxcluster.h"
#include <QDate>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionClu1_triggered()
{
   qDebug() << "Clu1 Triggered Date:" << QDate::currentDate();
   this->clu1 = new DxCluster();
   this->clu1->show();
}
