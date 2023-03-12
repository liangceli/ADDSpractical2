#include <iostream>
#include <string>
#include "Scissors.h"
#include "Move.h"
using namespace std;

Scissors::Scissors() {
    mName="Scissors";
    oMove="none";
}
string Scissors::getName() {
    return mName;
}
int Scissors::winLose(string oMove) {
    if (oMove=="Scissors") {
        return 2;
    }
    if (oMove=="Rock") {
        return -1;
    }
    if (oMove=="Paper") {
        return 1;
    }
    return 0;
}