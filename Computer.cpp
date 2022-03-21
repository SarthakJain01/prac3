#include <string>
#include <iostream>
#include "Player.h"
#include "Computer.h"
using namespace std;

Computer::Computer() {
  turn = 1;
  name = "Computer";
}
void Computer::play() {
  input = "RPS";
  turn++;
}
string Computer::get_name() {
  return name;
}
void Computer::refresh() {
  turn = 1;
}
