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
        // Player();
        Player(Game game, string name) : _game(game), _name(name){}
        void income();
        void foreign_aid();
        void coup(Player const &player);
        // void turn();
        // string players(Game game);
        // string winner(Game game);
        string role();
        int coins();

        // void block(Player const &player);
        friend std::ostream& operator<<(ostream& os,const Player &player);
        // friend std::istream& operator>>(istream& in, Player &player);
};
}