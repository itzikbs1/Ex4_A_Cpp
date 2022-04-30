#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
class Ambassador : public Player{


    public:
        Ambassador(Game game, string name) : Player(game, name){}
        void transfer(Player const &player1, Player const &player2);
        void block(Player &player);
};
}