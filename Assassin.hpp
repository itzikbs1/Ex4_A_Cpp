#include <iostream>
#include <iostream>
// #include "Game.hpp"
#include "Player.hpp"

using namespace std;
namespace coup{
class Assassin : public Player{

    private:
        string _name;
        Game _game;
    public:
        Assassin();
        Assassin(Game game, string name);

};
}