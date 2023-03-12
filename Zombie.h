#pragma once 
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;

class Zombie: public Move {
    private:
    string mName;
    string oMove;
    public:
    Zombie();
    string getName();
    int winLose(string oMove);
};