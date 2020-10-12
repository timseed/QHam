#include "callsign.h"

CallSign::CallSign(
                   QString pszCountry,
                            int     piCqZone,
                            int     piItuZone,
                            QString pszCont,
                            float   pfLat,
                            float   pfLon,
                            float   pfZtime,
        QString pszPrefix)
{

    this->szCountry= pszCountry;
    this->iCqZone=    piCqZone;
    this->iItuZone = piItuZone;
    this->szCont = pszCont;
    this->fLat = pfLat;
    this->fLon =pfLon;
    this->fZtime=pfZtime;
    this->szPrefix = pszPrefix;
}

int CallSign::ItuZone()
{
    return iItuZone;
}

QString CallSign::Continent()
{
    return szCont;
}

QString CallSign::Prefix()
{
return szPrefix;
}
