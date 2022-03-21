#include <string>
#include <iostream>
#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "FistfullODollars.h"
#include "PaperDoll.h"
#include "RandomComputer.h"
#include "Toolbox.h"
#include "Tournament.h"
using namespace std;

Computer * Tournament::opponent(string whatever) {
  if (whatever == "Avalanche") {
    Computer * player = new Avalanche();
    return player;
  } else if (whatever == "Bureaucrat") {
    Computer * player = new Bureaucrat();
    return player;
  } else if (whatever == "Toolbox") {
    Computer * player = new Toolbox();
    return player;
  } else if (whatever == "Crescendo") {
    Computer * player = new Crescendo();
    return player;
  } else if (whatever == "PaperDoll") {
    Computer * player = new PaperDoll();
    return player;
  } else if (whatever == "FistfullODollars") {
    Computer * player = new FistfullODollars();
    return player;
  }
}
void Tournament::competition() {
  string competitors;
  getline(cin, competitors);
  string gamers[8];
    int i = 0;
    stringstream ssin(competitors);
    while (ssin.good() && i < 8){
        ssin >> gamers[i];
        ++i;
    }
    Computer * spots[8];
    for (int j = 0; j<8; j++) {
      spots[j] =  opponent(gamers[j]);
    }
    Referee engiene;
    Computer * Qualifier1 = engiene.game(spots[0], spots[1]);
    Computer * Qualifier2 = engiene.game(spots[2], spots[3]);
    Computer * Qualifier3 = engiene.game(spots[4], spots[5]);
    Computer * Qualifier4 = engiene.game(spots[6], spots[7]);

    Computer * Finalist1 = engiene.game(Qualifier1, Qualifier2);
    Computer * Finalist2 = engiene.game(Qualifier3, Qualifier4);

    Computer * WINNER = engiene.game(Finalist1, Finalist2);
    cout << WINNER->get_name() << endl;
}
