#include <string>
#include <iostream>
#include <stdlib.h>
#include "Computer.h"
#include "FistfullODollars.h"
using namespace std;


FistfullODollars::FistfullODollars() {
  turn = 1;
  name = "FistfullODollars";
}
void FistfullODollars::play() {
  if (turn == 1) {
    input = "R";
    turn++;
  } else if (turn == 2) {
    input = "P";
    turn++;
  } else if (turn == 3) {
    input = "P";
    turn++;
  } else if (turn == 4){
    input = "R";
    turn++;
  } else if (turn == 5){
    input = "P";
    turn++;
  }
}
string FistfullODollars::get_name() {
  return name;
}

