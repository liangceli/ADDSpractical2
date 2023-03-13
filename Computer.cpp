#include<iostream>
#include<string>
#include"Player.h"
#include"Computer.h"
using namespace std;

Computer :: Computer(){
    c_name="computer";
}

Move* Computer :: makeMove(){
    Move* c_move=new Move;
    c_move->setMoveName("Rock");
    return c_move;
}

string Computer :: getName(){
    return c_name;
}