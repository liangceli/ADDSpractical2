#pragma once 
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;

class Rock: public Move{
    public:
    string mName;
    string oMove;
    
    Rock();
    string getName();
    int winLose(string oMove);
};