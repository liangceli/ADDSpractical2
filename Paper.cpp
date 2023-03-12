#include <iostream>
#include <string>
#include "Paper.h"
#include "Move.h"
using namespace std;

Paper::Paper() {
    mName="Paper";
    oMove="none";
}
string Paper::getName() {
    return mName;
}

int Paper::winLose(string oMove) {
    if (oMove=="Paper") {
        return 2;
    }
    if (oMove=="Rock") {
        return 1;
    }
    if (oMove=="Scissors") {
        return -1;
    }
    return 0;
}