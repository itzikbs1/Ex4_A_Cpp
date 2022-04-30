#include <iostream>
#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
class Captain : public Player{


    public:
        Captain(Game game, string name) : Player(game, name){}
        void block(Player const &player);
        void steal(Player const &player);
};
}