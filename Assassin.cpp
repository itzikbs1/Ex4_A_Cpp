#include <iostream>
#include <stdlib.h>
#include <string>
#include "Assassin.hpp"


using namespace std;
using namespace coup;

    Assassin::Assassin(Game game, string name){
        Assassin::_name = name;
        Assassin::_game = game;
    }