#include "Computer.h"
#include "Human.h"
#ifndef REFEREE_H
#define REFEREE_H

class Referee
{
public:
    Referee();
    char refGame(Human player1,Computer player2);
};
#endif