#include <string>
#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "Fistfull0Dollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
using namespace std;

Computer * Referee::game(Computer * one, Computer * two) {
    int oneWin = 0;
    int twoWin = 0;
    for (int i = 0; i<5; i++) {
      one -> play();
      two -> play();
      string o = one->get();
      string t = two->get();
      if (((o == "R")&&(t =="S"))||((o == "S")&&(t =="P"))||((o == "P")&&(t =="R"))) {
        oneWin++;
      } else if (o == t) {
        oneWin = oneWin;
        twoWin = twoWin;
      } else {
        twoWin++;
      }
    }

    one -> refresh();
    two -> refresh();
    if (oneWin == twoWin) {
      return one;
    } else if (oneWin > twoWin) {
      return one;
    } else {
      return two;
    }
}
