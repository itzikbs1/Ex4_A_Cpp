#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
class Duke : public Player{


    public:
        Duke(Game game, string name) : Player(game, name){}
        void block(Player const &player);
        void tax();
};
}