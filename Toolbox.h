#ifndef TOOLBOX_H
#define TOOLBOX_H

#include <string>
#include <iostream>
#include "Computer.h"
using namespace std;

class Toolbox:public Computer{
    public:
        Toolbox();
        void play();
        string get_name();
};
#endif 