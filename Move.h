#pragma once
#include <iostream>
#include <string>
using namespace std;

class Move {
    public:
    string mName;
    virtual string getName()=0;
    virtual int winLose(string oMove)=0;
};