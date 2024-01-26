#include "Card.hpp"


Card::Card(unsigned int value, const std::string& color):
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
unsigned int Card::get_value()const{
    return _value;
};
bool Card::operator==(const Card& c1)const {
    return _value == c1.get_value();
};

bool Card::operator<(const Card& c1)const {
    return _value < c1.get_value();
};


std::ostream& operator<<(std::ostream& stream, const Card& c){
    switch(c._value){
        case 1 : {
            stream << "As";break;
        }
        case 11 : {
            stream << "Valet";break;
        }
        case 12 : {
            stream << "Dame";break;
        }
        case 13 :{
            stream << "Roi";break;
        }
        default : {
            stream << c._value;
        }
    }
    stream << " de " << c._color;
    return stream;
};