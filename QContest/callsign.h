#ifndef CALLSIGN_H
#define CALLSIGN_H
#include <QTextStream>

/*
COLUMN	LENGTH	DESCRIPTION
1	26	Country Name
27	5	CQ Zone
32	5	ITU Zone
37	5	2-letter continent abbreviation
42	9	Latitude in degrees, + for North
51	10	Longitude in degrees, + for West
61	9	Local time offset from GMT
*/

class CallSign
{
public:
    CallSign(
            QString szCountry,
            int     iCqZone,
            int     iItuZone,
            QString szCont,
            float   fLat,
            float   fLon,
            float   fZtime,
            QString szPrefix);

    QString szCountry;
    int     iCqZone;
    int     iItuZone;
    QString szCont;
    float   fLat;
    float   fLon;
    float   fZtime;
    QString szPrefix;

    QString Country();
    int     CqZone();
    int     ItuZone();
    QString Continent();
    QString Prefix();


};

#endif // CALLSIGN_H
