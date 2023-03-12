#include<iostream>
#include<string>
#include"Move.h"
#include"Player.h"
#include"Computer.h"
#include"Human.h"
#include"Paper.h"
#include"Scissors.h"
#include"Rock.h"
#include"Referee.h"
#include"Zombie.h"
#include"Pirate.h"
#include"Monkey.h"
#include"Robot.h"
#include"Ninja.h"
using namespace std;

int main(){

    Rock r;
    Scissors s;
    Paper p;
    Robot robot;
    Ninja ninja;
    Zombie zombie;
    Monkey monkey;
    Pirate pirate;
    Computer* com=new Computer;
    Human* hum=new Human("John");
    Referee ruler;

    Player *winner=ruler.refGame(hum, com);
    //cout<<winner->getName();

   
    if(winner==nullptr){
        cout<<"Tie"<<endl;
    }else if(winner==hum){
        cout<<"Human";
    }else if(winner==com){
        cout<<"Computer";
    }

/*
招式class运行正常
    cout<<robot.winLose("Robot");
    cout<<robot.winLose("Ninja");
    cout<<robot.winLose("Zombie");
    cout<<robot.winLose("Pirate");
    cout<<robot.winLose("Monkey");
    */

   //测试human class makeMove（）似乎无法建立new class
  // hum->makeMove();

  /*
    Move* mmm1=new Paper;
    Move* mmm2=new Rock;
    Move* mmm3=s;
    Move* mmm4=new Pirate;
    Move* mmm5=new Ninja;
    cout<<mmm1->getName();
    cout<<mmm2->getName();
    cout<<mmm3->getName();
    cout<<mmm4->getName();
    cout<<mmm5->getName();
    cout<<s->getName();
    cout<<s->mName;
    cout<<s->oMove;*/

    //测试referee
    //ruler.refGame(hum,com);
    //com->makeMove();
    
    delete com;
    delete hum;
    return 0;

}
