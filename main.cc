#include <iostream>
#include <fstream>
#include <string>
#include <time.h>
#include <cstdlib>
#include "Player.h"
#include "Posn.h"
#include "Enemy.h"
#include "Item.h"
#include "Potion.h"
#include "Treasure.h"
#include "Cell.h"
#include "Chamber.h"
#include "Floor.h"
#include "Game.h"

using namespace std;

void printPlayer(Player &a){
    cout << "HP: " <<  *a.get_hp() << endl;
    cout << "ATK: " << *a.get_atk() << endl;
    cout << "DEF: " << *a.get_def() << endl;
    cout << "Gold: " << *a.get_gold() << endl;
    cout << "BarrierSuit: " << a.get_barriersuit() << endl;    
}

void useItem(Player &a, Item &p){
    p.useItem(a);
}

int main(int argc, char* argv[]){
    srand(time(NULL));
    Game game;
    if (argc == 2) {
        game.start_game(argv[1]);
    }
    else game.start_game();
    return 0;
}
