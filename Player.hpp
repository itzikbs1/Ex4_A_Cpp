#pragma once
#include <iostream>
#include "Game.hpp"

using namespace std;
namespace coup{
class Player{

    protected:
        string _name;
        Game _game;
        int coins_player;
        string player_role;

    public:
        Player(Game game, string name) : _game(game), _name(name){}
        void income();
        void foreign_aid();
        void coup(Player const &player);
        static string role();
        static int coins();
        friend std::ostream& operator<<(ostream& os,const Player &player);
};
}