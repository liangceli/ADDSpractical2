#pragma once 
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;

class Pirate: public Move {
    private:
    string mName;
    string oMove;
    public:
    Pirate();
    string getName();
    int winLose(string oMove);
};