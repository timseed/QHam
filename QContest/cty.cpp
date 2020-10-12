#include "cty.h"

Cty::Cty()
{
    QFile file("cty.dat");
    if(!file.open(QIODevice::ReadOnly)) {
        //QMessageBox::information(0, "error", file.errorString());
        qDebug() << "error" + file.errorString();
    }


    QTextStream in(&file);

    while(!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(":");
/*
 *
 *
COLUMN	LENGTH	DESCRIPTION
1	26	Country Name
27	5	CQ Zone
32	5	ITU Zone
37	5	2-letter continent abbreviation
42	9	Latitude in degrees, + for North
51	10	Longitude in degrees, + for West
61	9	Local time offset from GMT
 *
 * Easy Simple line....
  Sov Mil Order of Malta:   15:  28:  EU:   41.90:   -12.43:    -1.0:  1A:
    1A;

Less so
Mongolia:                 23:  32:  AS:   46.77:  -102.17:    -7.0:  JT:
    JT,JU,JV,JT2[33],JT3[33],JU2[33],JU3[33],JV2[33],JV3[33];




(#)	Override CQ Zone
[#]	Override ITU Zone
<#/#>	Override latitude/longitude
{aa}	Override Continent
~#~	Override local time offset from GMT
*/


        //model->appendRow(fields);
    }

    file.close();
}
