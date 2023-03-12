#pragma once 
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;

class Ninja: public Move {
    private:
    string mName;
    string oMove;
    public:
    Ninja();
    string getName();
    int winLose(string oMove);
};