#include <iostream>
#include <string>
#include "Pirate.h"
#include "Move.h"
using namespace std;

Pirate::Pirate() {
    mName="Pirate";
    oMove="none";
}
string Pirate::getName() {
    return mName;
}
int Pirate::winLose(string oMove) {
    if (oMove=="Pirate") {
        return 2;
    }
    if (oMove=="Robot" || oMove=="Monkey") {
        return 1;
    }
    if (oMove=="Zombie" || oMove=="Ninja") {
        return -1;
    }
    return 0;
}