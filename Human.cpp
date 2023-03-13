#include<iostream>
#include<string>
#include"Player.h"
#include"Human.h"
using namespace std;

Human :: Human(){
    h_name="Human";
}

Human :: Human(string p_n){
    h_name=p_n;
}

string Human :: getName(){
    return h_name;
}

Move* Human :: makeMove(){

    //cout<<"Enter Move:";
    string input;
    cin >> input;

    Move* move = new Move;
    move->setMoveName(input);
    return move;
}