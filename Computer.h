#pragma once
#include<iostream>
#include<string>
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"
#include "Human.h"
#include "Player.h"
using namespace std;


class Computer: public Player{
    private:
    string c_name;

    public:
    Computer();
    Move* makeMove();
    string getName();

};