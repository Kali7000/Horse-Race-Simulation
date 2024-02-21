//Name: Vishal Wagh
// CSCI24000_Fall23_A3

//this program fails when you input anything other than integers


#include <bits/stdc++.h>
#include "simulate.h"
using namespace std;

int main() {
    int horses;
    int trackL;

    while (true) {
        cout << "Enter number of horses:" << endl;
        cin >> horses;

        if (horses < 2) {
            cout << "Number of horses cannot be less than 2, try again!" << endl;
        } else {
            while (true) {
                cout << "Enter the track's length:" << endl;
                cin >> trackL;

                if (trackL < 2) {
                    cout << "The track's length cannot be less than 2, try again!" << endl;
                } else {
                    cout << "The Race begins ------->>>" << endl;
                    break;
                }
            }
            break; //access simulate
        }
    }

    simulate(horses, trackL);
    return 0;
}

