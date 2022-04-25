#include <iostream>
#include <iostream>
#include "Player.hpp"

using namespace std;
namespace coup{
class Captain : public Player{

    private:
        string _name;
        Game _game;
    public:
        Captain();
        Captain(Game game, string &name);
        Captain(Game game, string name);
        void steal(Player player);
};
}