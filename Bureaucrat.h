#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>
#include "Computer.h"
using namespace std;

class Bureaucrat:public Computer{
    public:
        Bureaucrat();
        void play();
        string get_name();
};
#endif 