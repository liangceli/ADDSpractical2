#pragma once
#include<iostream>
#include<string>
#include"Move.h"
#include"Player.h"
#include"Computer.h"
#include"Paper.h"
#include"Scissors.h"
#include"Rock.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"
using namespace std;

class Human: public Player{
    private:
    string h_name;
    string h_move;

    public:
    Human(string name);
    Move* makeMove();
    string getName();
    string get_Move();

};