#include <iostream>
#include <string>
class Person
{
public:
    Person(std::string f_name, std::string surname)
    : _first_name { f_name},
    _surname{surname}
    {};
    
    std::string get_first_name();
    std::string get_surname();
private:
    std::string _first_name;
    std::string _surname;
};


/*
Difficultés:
Savoir où placé le constructeur et comment declarer dans le .hpp et initialiser dans le .cpp les fonctions d'une classe :  dans le .cpp, faut ecrire -> Classe::nomMethode
*/