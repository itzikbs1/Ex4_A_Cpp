#include <iostream>
#include <stdlib.h>
#include <string>
#include "Duke.hpp"


using namespace std;
using namespace coup;

    // Duke::Duke(){
    //     Duke::_name = "default name";
    //     Duke::_game = Game();
    // }
    Duke::Duke(Game game, string name){
        Duke::_name = name;
        Duke::_game = game;
    }
    void Duke::block(Player player){

    }
    void Duke::tax(){

    }