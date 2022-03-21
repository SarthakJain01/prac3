#ifndef AVALANCHE_H
#define AVALANCHE_H

#include <string>
#include <iostream>
#include "Computer.h"
using namespace std;

class Avalanche:public Computer{
    public:
        Avalanche();
        void play();
        string get_name();
};
#endif 