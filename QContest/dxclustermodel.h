#ifndef DXCLUSTERMODEL_H
#define DXCLUSTERMODEL_H
#include <QAbstractTableModel>
#include <QString>

class DxClusterModel : public  QAbstractTableModel
{
    Q_OBJECT
public:
    DxClusterModel(QObject *parent = nullptr);
};

#endif // DXCLUSTERMODEL_H
