#pragma once
#include <iostream>
#include "Game.hpp"

using namespace std;
namespace coup{
class Player{

    private:

    public:
        // Player();
        void income();
        void foreign_aid();
        void coup(Player player);
        // void turn();
        // string players(Game game);
        // string winner(Game game);
        string role();
        int coins();

        void block(Player player);
        friend std::ostream& operator<<(ostream& os,const Player &player);
        // friend std::istream& operator>>(istream& in, Player &player);
};
}