#include <iostream>
#include <string>
#include "Referee.h"
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
using namespace std;

Referee::Referee(){}

Player* Referee::refGame(Player *player1, Player *player2) {
    //string M1=player1->makeMove()->getName();
    //cout<<M1;
    string M2=player2->makeMove()->getName();//第二个玩家的招式名
    //cout<<M2;//通过

    int n1;
    n1=player1->makeMove()->winLose(M2);//将第二个玩家招式名称和第一个玩家进行比较
    //cout<<n1;//通过

    if (n1==2) {
        return nullptr;
    }
    if (n1==1) {
        return player1;
    }
    if (n1==-1) {
        return player2;
    }
    
}