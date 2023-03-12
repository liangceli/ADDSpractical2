#include<iostream>
#include<string>
#include"Move.h"
#include"Player.h"
#include"Computer.h"
#include"Human.h"
#include"Paper.h"
#include"Scissors.h"
#include"Rock.h"
#include "Monkey.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Robot.h"
#include "Zombie.h"
using namespace std;

Human :: Human(string name){
    h_name=name;
}

Move* Human :: makeMove(){
    string h_move;
    cout<<"Enter move: ";
    cin>>h_move;

    if(h_move=="Rock"){
        Move* the_m=new Rock;
        return the_m;
    }else if(h_move=="Paper"){
        Move* the_m=new Paper;
        return the_m;
    }else if(h_move=="Scissors"){
        Move* the_m=new Scissors;
        return the_m;
    }else if(h_move=="Monkey"){
        Move* the_m=new Monkey;
        return the_m;
    }else if(h_move=="Zombie"){
        Move* the_m=new Zombie;
        return the_m;
    }else if(h_move=="Ninja"){
        Move* the_m=new Ninja;
        return the_m;
    }else if(h_move=="Pirate"){
        Move* the_m=new Pirate;
        return the_m;
    }else if(h_move=="Robot"){
        Move* the_m=new Robot;
        return the_m;
    }

    return nullptr;
}

string Human :: getName(){
    return h_name;
}