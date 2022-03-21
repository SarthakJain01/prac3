#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include <string>
#include <iostream>
#include "Computer.h"
using namespace std;

class RandomComputer:public Computer{
    public:
        RandomComputer();
        void play();
        string get_name();
};
#endif 