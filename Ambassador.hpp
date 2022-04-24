#include <iostream>
// #include "Game.hpp"
#include "Player.hpp"

using namespace std;
namespace coup{
class Ambassador : public Player{

    private:
        string _name;
        Game _game;
    public:
        Ambassador();
        Ambassador(Game game, string name);
        void transfer(Player player1, Player player2);
};
}