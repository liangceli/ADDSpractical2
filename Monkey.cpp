#include <iostream>
#include <string>
#include "Monkey.h"
#include "Move.h"
using namespace std;

Monkey::Monkey() {
    mName="Monkey";
    oMove="";
}
string Monkey::getName() {
    return mName;
}
int Monkey::winLose(string oMove) {
    if (oMove=="Monkey") {
        return 2;
    }
    if (oMove=="Ninja" || oMove=="Robot") {
        return 1;
    }
    if (oMove=="Zombie" || oMove=="Pirate") {
        return -1;
    }
    return 0;
}