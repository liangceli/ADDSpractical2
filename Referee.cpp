#include<iostream>
#include<string>
#include"Move.h"
#include"Referee.h"
#include"Player.h"

 Player* Referee :: refGame(Player*player1, Player*player2){  
        
        Move* the_move = new Move();
        Move* p1m = player1->makeMove();
        Move* p2m = player2->makeMove();
        
        int res = the_move->Judge(p1m, p2m);

        if(res==2){
          return nullptr;  
        }
        
        if(res==1){
            return player1;
        }
        
        if(res==-1){
            return player2;
        }
        if(res==0){
           return nullptr; 
        }

        delete the_move;
     }