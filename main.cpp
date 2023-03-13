#include <iostream>
#include<string>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"
using namespace std;

int main(){

    Human *hum = new Human("john");
    Computer *com = new Computer;
    Referee *r =  new Referee;
    Player * winner = r->refGame(hum,com);
    cout << winner->getName() << endl;

    return 0;
}