#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dxcluster.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    DxCluster *clu1,*clu2;


private slots:
    void on_actionClu1_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
