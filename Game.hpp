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
        static string turn();
        static vector<string> players();
        static string winner(Game game);
};
}