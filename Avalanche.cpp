#include <string>
#include <iostream>
#include <stdlib.h>
#include "Computer.h"
#include "Avalanche.h"
using namespace std;

Avalanche::Avalanche() {
  turn = 1;
  name = "Avalanche";
}
void Avalanche::play() {
  input = "R";
  turn++;
}
string Avalanche::get_name() {
  return name;
}
