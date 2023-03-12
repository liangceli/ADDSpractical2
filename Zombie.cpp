#include <iostream>
#include <string>
#include "Zombie.h"
#include "Move.h"
using namespace std;

Zombie::Zombie() {
    mName="Zombie";
    oMove="";
}
string Zombie::getName() {
    return mName;
}
int Zombie::winLose(string oMove) {
    if (oMove=="Zombie") {
        return 2;
    }
    if (oMove=="Pirate" || oMove=="Monkey") {
        return 1;
    }
    if (oMove=="Robot" || oMove=="Ninja") {
        return -1;
    }
    return 0;
}