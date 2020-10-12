#ifndef BAND_H
#define BAND_H

enum eBnd {BUnk=-1, B180=160,B80=80,B40=40,B20=20, B15=15,B10=10 };

class Band
{
public:
    Band();
    eBnd FtoBand(float frequency);
};

#endif // BAND_H
