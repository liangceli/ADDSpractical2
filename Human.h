#pragma once
#include<iostream>
#include<string>
#include"Player.h"

class Human: public Player{
    private:
    std :: string h_name;

    public:
    Human();
    Human(std::string p_n);
    std :: string getName();
    Move* makeMove();
};