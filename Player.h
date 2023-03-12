#pragma once
#include<iostream>
#include<string>
#include"Move.h"
using namespace std;

class Player{
    public:
    virtual Move * makeMove()=0;  // return type is changed, the return type of this is a hint to the polymorphism
    virtual string getName()=0; // returns the name of the Player as a string
};