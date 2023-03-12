#pragma once 
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;

class Paper: public Move {
    public:
    string mName;
    string oMove;
    
    Paper();
    string getName();
    int winLose(string oMove);
};