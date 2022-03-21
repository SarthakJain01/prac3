#ifndef TOURNAMENT_h
#define TOURNAMENT_h

#include <string>
#include <iostream>
#include <sstream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
using namespace std;

class Tournament{
    private:
        Computer * opponent(string whatever);

    public:
        void competition();
};
#endif 