#include <iostream>
#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
class Captain : public Player{

    private:
        // string _name;
        // Game _game;
    public:
        // Captain();
        // Captain(Game game, string &name);
        Captain(Game game, string name) : Player(game, name){}
        void block(Player const &player);
        void steal(Player player);
};
}