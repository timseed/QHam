#include "band.h"

Band::Band()
{

}


eBnd Band::FtoBand(float frequency){
    eBnd FoundBand ;
    if (frequency > 28000.0)
        FoundBand  = BUnk;
    else
    {
        if((frequency>1800.0)&(frequency<2000.0))
        {
            FoundBand = B180;
        }
        if ((frequency>3500.0)&(frequency<3700.0))
        {
            FoundBand = B80;
        }
        if ((frequency>7000.0)&&(frequency<7300.0))
        {
            FoundBand = B40;
        }
        if ((frequency>14000.0)&&(frequency<14350.0))
        {
            FoundBand = B20;
        }
        if ((frequency>21000.0)&&(frequency<21350.0))
        {
            FoundBand = B15;
        }
        if ((frequency>28000.0)&&(frequency<29500.0))
        {
            FoundBand = B10;
        }
    }
    return FoundBand;
}
