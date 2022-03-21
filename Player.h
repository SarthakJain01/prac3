#ifndef Player_h
#define Player_h

#include <string>
#include <iostream>
using namespace std;

class Player{
    protected:
        string input;
    public:
        string get();
        virtual void play() = 0;
};
#endif 