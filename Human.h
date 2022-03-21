
#ifndef Human_h
#define Human_h

#include <string>
#include <iostream>
#include "Player.h"
using namespace std;
class Human:public Player{
    public:
        Human();
        void play();
};

#endif 