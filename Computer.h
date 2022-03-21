#ifndef Computer_h
#define Computer_h

#include <string>
#include <iostream>
#include "Player.h"
using namespace std;

class Computer:public Player{
    protected:
        int turn;
        string name;
    public:
        Computer();
        virtual void play();
        virtual string get_name();
        void refresh();
};
#endif 