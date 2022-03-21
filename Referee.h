#ifndef Referee_h
#define Referee_h

#include <string>
#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "Fistfull0Dollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
using namespace std;

class Referee{
    public:
        Computer* game(Computer * one, Computer * two);
};

#endif //Referee_h