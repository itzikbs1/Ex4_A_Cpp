#include <iostream>
#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
class Assassin : public Player{

    private:
        // string _name;
        // Game _game;
    public:
        // Assassin();
        // Assassin(Game game, string &name);
        Assassin(Game game, string name) : Player(game, name){}
        void coup(Player const &player);
};
}