#include <iostream>
#include <stdlib.h>
#include <string>
#include "Ambassador.hpp"


using namespace std;
using namespace coup;

    Ambassador::Ambassador(Game game, string name){
        Ambassador::_name = move(name);
        Ambassador::_game = game;
    }
    void Ambassador::transfer(Player player1, Player player2){

    }