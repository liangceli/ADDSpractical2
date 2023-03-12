#include <iostream>
#include <string>
#include "Ninja.h"
#include "Move.h"
using namespace std;

Ninja::Ninja() {
    mName="Ninja";
    oMove="";
}
string Ninja::getName() {
    return mName;
}
int Ninja::winLose(string oMove) {
    if (oMove=="Ninja") {
        return 2;
    }
    if (oMove=="Pirate" || oMove=="Zombie") {
        return 1;
    }
    if (oMove=="Robot" || oMove=="Monkey") {
        return -1;
    }
    return 0;
}