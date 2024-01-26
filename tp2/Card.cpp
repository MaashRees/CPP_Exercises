#include "Card.hpp"


Card::Card(unsigned int value, std::string color):
    _value { value},
    _color { color}
    {};

void Card::print() const{
    std::cout << _value << " de " << _color << std::endl;
};
unsigned int Card::get_value(){
    return _value;
};
bool Card::operator==(Card c1)const {
    return _value == c1.get_value();
};