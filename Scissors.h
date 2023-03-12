#pragma once 
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;

class Scissors: public Move {
    public:
    string mName;
    string oMove;
   
    Scissors();
    string getName();
    int winLose(string oMove);
};