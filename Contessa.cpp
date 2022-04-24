#include <iostream>
#include <stdlib.h>
#include <string>
#include "Contessa.hpp"


using namespace std;
using namespace coup;

    Contessa::Contessa(Game game, string name){
        Contessa::_name = name;
        Contessa::_game = game;
    }