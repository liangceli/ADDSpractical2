#include <iostream>
#include <string>
#include "Rock.h"
#include "Move.h"
using namespace std;

Rock::Rock() {
    mName="Rock";
    oMove="none";
}
string Rock::getName() {
    return mName;
}
int Rock::winLose(string oMove) {
    if (oMove=="Rock") {
        return 2;
    }
    if (oMove=="Paper") {
        return -1;
    }
    if (oMove=="Scissors") {
        return 1;
    }
    return 0;
}