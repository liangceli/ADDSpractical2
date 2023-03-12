#pragma once 
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;

class Robot: public Move {
    private:
    string mName;
    string oMove;
    public:
    Robot();
    string getName();
    int winLose(string oMove);
};