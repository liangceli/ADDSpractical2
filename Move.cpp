#pragma once
#include<iostream>
#include<string>
#include"Move.h"
using namespace std;

Move :: Move(){
    movename="none";
}

string Move ::getName(){
    return movename;
}

void Move :: setMoveName(string n){
    movename=n;
}

int Move :: Judge(Move* p1, Move* p2){
    //int res;
    if(p1->getName()==p2->getName()){
        return 2;
    }else if(p1->getName() == "Paper" && p2->getName() == "Rock"){
                return 1;
                }
            else if(p1->getName() == "Rock" && p2->getName() == "Paper"){
                return -1;
            }
            else if(p1->getName() == "Paper" && p2->getName() == "Scissors"){
                return -1;
            }
            else if(p1->getName() == "Scissors" && p2->getName() == "Paper"){
                return 1;
            }
            else if(p1->getName() == "Rock" && p2->getName() == "Scissors"){
                return 1;
            }
            else if(p1->getName() == "Scissors" && p2->getName() == "Rock"){
                return -1;
            }
            
            else if(p1->getName() == "Monkey" && (p2->getName() == "Ninja" || p2->getName() == "Robot")){
                return 1;
            }
            else if(p1->getName() == "Robot" && (p2->getName() == "Ninja" || p2->getName() == "Zombie")){
                return 1;
            }
            else if(p1->getName() == "Pirate" && (p2->getName() == "Robot" || p2->getName() == "Monkey")){
                return 1;
            }
            else if(p1->getName() == "Ninja" && (p2->getName() == "Pirate" || p2->getName() == "Zombie")){
                return 1;
            }
            else if(p1->getName() == "Zombie" && (p2->getName() == "Pirate" || p2->getName() == "Monley")){
                return 1;
            }
            else{
                return 0;
            }
        }



