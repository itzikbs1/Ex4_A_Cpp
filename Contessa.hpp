#include <iostream>
#include <iostream>
// #include "Game.hpp"
#include "Player.hpp"

using namespace std;
namespace coup{
class Contessa : public Player{

    private:
        string _name;
        Game _game;
    public:
        Contessa();
        Contessa(Game game, string name);

};
}