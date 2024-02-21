#include <bits/stdc++.h>
#include "track.h"
using namespace std;

void track::changeLength(int newLength) {
    length = newLength;
}

int track::getLength() {
    return length;
}

void track::printTrack(int horses, horse horseArr[]) {   //print the track
    for (int j = 0; j < horses; j++) {
        for (int i = 1; i < length + 1; i++) {
            if (i == horseArr[j].getPosition()) {
                cout << horseArr[j].getName();
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
}


