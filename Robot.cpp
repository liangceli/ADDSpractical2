#include <iostream>
#include <string>
#include "Robot.h"
#include "Move.h"
using namespace std;

Robot::Robot() {
    mName="Robot";
    oMove="";
}
string Robot::getName() {
    return mName;
}

int Robot::winLose(string oMove) {
    if (oMove=="Robot") {
        return 2;
    }
    if (oMove=="Ninja" || oMove=="Zombie") {
        return 1;
    }
    if (oMove=="Monkey" || oMove=="Pirate") {
        return -1;
    }
    return 0;
}