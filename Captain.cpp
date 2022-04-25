#include <iostream>
#include <stdlib.h>
#include <string>
#include "Captain.hpp"


using namespace std;
using namespace coup;

    Captain::Captain(Game game, string name){
        Captain::_name = move(name);
        Captain::_game = game;
    }
    void Captain::steal(Player player){
        
    }