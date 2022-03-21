#include <string>
#include <iostream>
#include <stdlib.h>
#include "Computer.h"
#include "Bureaucrat.h"
using namespace std;

Bureaucrat::Bureaucrat() {
  turn = 1;
  name = "Bureaucrat";
}
void Bureaucrat::play() {
  input = "P";
  turn++;
}
string Bureaucrat::get_name() {
  return name;
}
