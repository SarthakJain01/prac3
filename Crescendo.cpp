#include <string>
#include <iostream>
#include <stdlib.h>
#include "Computer.h"
#include "Crescendo.h"
using namespace std;

Crescendo::Crescendo() {
  turn = 1;
  name = "Crescendo";
}
void Crescendo::play() {
  if (turn == 1) {
    input = "P";
    turn++;
  } else if (turn == 2) {
    input = "S";
    turn++;
  } else if (turn == 3){
    input = "R";
    turn++;
  } else if (turn == 4){
    input = "P";
    turn++;
  } else if (turn == 5){
    input = "S";
    turn++;
  }
}
string Crescendo::get_name() {
  return name;
}