#pragma once//need this?
#include <iostream>
#include <stdlib.h>
#include <string>
#include "vector"
using namespace std;
namespace coup{
class Game{

    private:

    public:
        Game();
        string turn();
        vector<string> players();
        string winner(Game game);
        // string role();
        // int coins();
        // friend std::ostream& operator<<(ostream& os,const Player &player);

};
}