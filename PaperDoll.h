#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include <string>
#include <iostream>
#include "Computer.h"
using namespace std;

class PaperDoll:public Computer{
    public:
        PaperDoll();
        void play();
        string get_name();
};
