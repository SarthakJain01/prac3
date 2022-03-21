#include <string>
#include <iostream>
#include <stdlib.h>
#include "Computer.h"
#include "PaperDoll.h"
using namespace std;

PaperDoll::PaperDoll() {
  turn = 1;
  name = "PaperDoll";
}
void PaperDoll::play() {
  if (turn == 1) {
    input = "P";
    turn++;
  } else if (turn == 2) {
    input = "S";
    turn++;
  } else if (turn == 3) {
    input = "S";
    turn++;
  } else if (turn == 4){
    input = "P";
    turn++;
  } else if (turn == 5){
    input = "p";
    turn++;
  }
}
string PaperDoll::get_name() {
  return name;
}


