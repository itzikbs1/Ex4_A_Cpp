#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
class Duke : public Player{

    private:
        // string _name;
        // Game _game;
    public:
        // Duke();
        // Duke(Game game, string &name);
        Duke(Game game, string name) : Player(game, name){}
        void block(Player const &player);
        void tax();
};
}