#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include <iostream>
#include "Player.h"
#include "Human.h"
using namespace std;

Human::Human() {}

void Human::play() {
  getline(cin, input);
};
#endif
