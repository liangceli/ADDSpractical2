#include <iostream>
#include <string>
#include "Player.h"
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

class Referee {
    public:
    Referee();
    Player *refGame(Player *player1, Player *player2);
};