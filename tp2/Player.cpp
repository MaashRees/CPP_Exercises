#include "Player.hpp"

Player::Player(const std::string& name):
    _name{name}
    {
        //initialisation de _cars à null et score à 0
    };
void Player::deal_all_cards(Player& p1, Player& p2){
    std::vector<Card> all_cards;
    std::vector<std::string> colors = {"Pique", "Carreau", "Trefle", "Coeur"};
    for(int j = 0; j < colors.capacity(); j++){
        for(int i = 7; i < 16; i++){
            Card c {i, colors[j]};
            all_cards.push_back(c);
        }       
    }
    std::random_device rd;
    std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));
    auto capacity = all_cards.capacity();
    for(int i = 0; i < capacity; i++){
        if(i < capacity / 2 ){
            p1._cards.push_back(all_cards[i]);
        } else {
            p2._cards.push_back(all_cards[i]);
        }
    }
}
Card Player::operator[](int index) const{
    return _cards[index];
}
