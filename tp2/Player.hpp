#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>
#include "Card.hpp"

class Player{
    private:
        std::string _name;
        std::vector<Card> _cards;
        unsigned int _score{0}; 

    public:
        Player(const std::string& name);
        static void deal_all_cards(Player& p1, Player& p2);
    Card operator[](int index) const;
};