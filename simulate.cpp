#include <bits/stdc++.h>
#include "horse.h"
#include "track.h"
using namespace std;

void simulate(int horses, int trackL) {
    horse* horseArr = new horse[horses];                 // dynamic array

    for (int i = 0; i < horses; i++) {                   // create horses
        horseArr[i] = horse(to_string(i + 1));
    }

    track t1;                                             // create track
    t1.changeLength(trackL);

    srand(time(0));
    while (true) {
        int youGo = rand() % horses;                       // pick horse
        horseArr[youGo].move();                            // move horse
        t1.printTrack(horses, horseArr);

        if (horseArr[youGo].getPosition() == trackL) {     // check if a horse is at the end
            cout << "Horse " << horseArr[youGo].getName() << " wins!";
            break;
        }
        cout << endl;
    }

    delete[] horseArr;                                    // deallocating the memory
}


