#ifndef HORSE_H
#define HORSE_H

#include <string>
using namespace std;

class horse {
public:
    string name;
    int position = 1;
    horse();
    horse(string Name);

    void setName(string newName);
    string getName();
    void move();
    int getPosition();
};

#endif


