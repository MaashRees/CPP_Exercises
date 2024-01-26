#include <iostream>
#include <string>

class Card
{
    private:
        unsigned int _value;
        std::string _color;
    public:
        Card(unsigned int value, std::string color);
        void print() const; // pour la q6 : cette fonction ne modifie pas l'objet en paramètre
        
        bool operator==(Card c) const;
        unsigned int get_value();
};