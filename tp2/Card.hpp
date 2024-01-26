#include <iostream>
#include <string>

class Card
{
    private:
        unsigned int _value;
        std::string _color;
    public:
        Card(unsigned int value, const std::string& color);
        void print() const; // pour la q6 : cette fonction ne modifie pas l'objet en paramètre
        
        bool operator==(const Card& c) const;
        unsigned int get_value() const; //cette fonction permet l'accès à _value de `Card`, sans changer leur visibilité
        bool operator<(const Card& c1)const;
        friend std::ostream& operator<<(std::ostream& stream, const Card& c);
};