#include <string>
#include <iostream>
#include <stdlib.h>
#include "Computer.h"
#include "RandomComputer.h"
using namespace std;

RandomComputer::RandomComputer() {
  turn = 1;
  name = "RandomComputer";
}
void RandomComputer::play() {
  srand (time(NULL));
  int randomNumber = rand() % 3 + 1;
  if (randomNumber == 1) {
    input = "R";
    turn++;
  } else if (randomNumber == 2) {
    input = "P";
    turn++;
  } else {
    input = "S";
    turn++;
  }
}
string RandomComputer::get_name() {
  return name;
}

