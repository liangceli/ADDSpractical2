#pragma once
#include<iostream>
#include<string>
#include"Move.h"
#include"Rock.h"
#include"Player.h"
using namespace std;


class Computer: public Player{
    private:
    string c_name;

    public:
    Computer();
    Move* makeMove();
    string getName();

};