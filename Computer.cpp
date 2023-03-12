#include<iostream>
#include<string>
#include"Move.h"
#include"Rock.h"
#include"Player.h"
#include"Computer.h"
using namespace std;


Computer :: Computer(){
    c_name="Computer";
}

Move* Computer :: makeMove(){
    string c_move="Rock";
    Move* the_m=new Rock;
    the_m->mName=c_move;
    return the_m;
}

string Computer :: getName(){
    return c_name;
}