#pragma once 
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;

class Monkey: public Move {
    private:
    string mName;
    string oMove;
    public:
    Monkey();
    string getName();
    int winLose(string oMove);
};