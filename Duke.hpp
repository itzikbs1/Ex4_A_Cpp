#include <iostream>
// #include "Game.hpp"
#include "Player.hpp"

using namespace std;
namespace coup{
class Duke : public Player{

    private:
        string _name;
        Game _game;
    public:
        Duke();
        Duke(Game game, string name);
        void block(Player player);
        void tax();
};
}