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
#include "Computer.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>

using namespace std;


Computer :: Computer(){
    c_name="Computer";
}

Move* Computer :: makeMove(){
    srand((unsigned)time(NULL));
    int random=rand()%7;
    //int random=rand()%5+3;//3-7
    

    //cout<<random;
    
    if(random==0){
        Move* the_cm=new Rock;
        return the_cm;
    }else if(random==1){
        Move* the_cm=new Paper;
        return the_cm;
    }else if(random==2){
        Move* the_cm=new Scissors;
        return the_cm;
    }else if(random==3){
        Move* the_cm=new Monkey;
        return the_cm;
    }else if(random==4){
        Move* the_cm=new Zombie;
        return the_cm;
    }else if(random==5){
        Move* the_cm=new Ninja;
        return the_cm;
    }else if(random==6){
        Move* the_cm=new Pirate;
        return the_cm;
    }else if(random==7){
        Move* the_cm=new Robot;
        return the_cm;
    }

    //return nullptr;
}

string Computer :: getName(){
    return c_name;
}