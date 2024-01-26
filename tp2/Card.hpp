#include <iostream>
#include <string>

class Card
{
    private:
        unsigned int _value;
        std::string _color;
    public:
        Card(unsigned int value, std::string color);
        void print();
};