#include "Referee.h"
#include <iostream>

Referee::Referee(){}
char Referee::refGame(Human player1,Computer player2 ){
    char Human_turn = player1.makeMove();

    if(Human_turn == 'R'){
        return 'T';
    }    
    if(Human_turn == 'P'){
        return 'W';
    }    
    if(Human_turn == 'S'){
        return 'L';
    }        
return 0;
}