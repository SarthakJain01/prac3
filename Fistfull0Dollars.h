#ifndef FISTFULL0DOLLARS_H
#define FISTFULL0DOLLARS_H

#include <string>
#include <iostream>
#include "Computer.h"
using namespace std;

class FistfullODollars:public Computer{
    public:
        FistfullODollars();
        void play();
        string get_name();
};