#include "Card.hpp"


Card::Card(unsigned int value, std::string color):
    _value { value},
    _color { color}
    {};

void Card::print() const{
    std::string value;
    switch(_value){
        case 1 : {
            value = "As";break;
        }
        case 11 : {
            value = "Valet";break;
        }
        case 12 : {
            value = "Dame";break;
        }
        case 13 :{
            value = "Roi";break;
        }
        default : {
            value = std::to_string(_value);
        }
    }
    std::cout << value << " de " << _color << std::endl;
};
unsigned int Card::get_value(){
    return _value;
};
bool Card::operator==(Card c1)const {
    return _value == c1.get_value();
};

bool Card::operator<(Card c1)const {
    return _value < c1.get_value();
};