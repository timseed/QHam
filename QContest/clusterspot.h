#ifndef CLUSTERSPOT_H
#define CLUSTERSPOT_H

#include <QObject>
#include <QDateTime>
#include "band.h"
class ClusterSpot
{
public:
    ClusterSpot();
    QDateTime When;
    QString   Spotter;  // Who saw this
    QString   Call;    // Call Sign of who spotted this
    eBnd      Band;
    float     Freq;

};

#endif // CLUSTERSPOT_H
