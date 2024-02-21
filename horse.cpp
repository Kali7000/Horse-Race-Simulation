#include <bits/stdc++.h>
#include "horse.h"
using namespace std;

horse::horse() {
    // create horse object 
}

horse::horse(string Name) : name(Name) {}

void horse::setName(string newName) {
    name = newName;
}

string horse::getName() {
    return name;
}

void horse::move() {
    position++;        //move horse by 1
}

int horse::getPosition() {
    return position;   // return position
}


