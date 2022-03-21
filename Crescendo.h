#ifndef CRESCENDO_H
#define CRESCENDO_H

#include <string>
#include <iostream>
#include "Computer.h"
using namespace std;

class Crescendo:public Computer{
    public:
        Crescendo();
        void play();
        string get_name();
};
