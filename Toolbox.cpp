#include <string>
#include <iostream>
#include <stdlib.h>
#include "Computer.h"
#include "Toolbox.h"
using namespace std;

Toolbox::Toolbox() {
  turn = 1;
  name = "Toolbox";
}
void Toolbox::play() {
  input = "S";
  turn++;
}
string Toolbox::get_name() {
  return name;
}