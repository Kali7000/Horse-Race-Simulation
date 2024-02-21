#ifndef TRACK_H
#define TRACK_H

#include "horse.h"

class track {
    int length;
public:
    void changeLength(int newLength);
    int getLength();

    void printTrack(int horses, horse horseArr[]);
};

#endif


