#pragma once
#include<iostream>
#include<string>
#include"Player.h"

class Computer: public Player{
    private:
    std::string c_name;

    public:
        Computer();
        Move* makeMove();
        std::string getName();
};