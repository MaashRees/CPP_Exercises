#include <iostream>
#include "Person.hpp"
int main(){
    Person p1("La Faluche", "Palluche");

    std::string f_name = p1.get_first_name();
    std::string surname = p1.get_surname();

    std::cout << "La personne s'appelle "<< surname << " " << f_name <<std::endl;

    return 0;
}