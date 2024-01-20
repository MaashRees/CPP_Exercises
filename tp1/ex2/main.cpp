#include <iostream>
#include "Person.hpp"
int main(){
    Person p1;
    p1.first_name = "La Faluche";
    p1.surname = "Palluche";

    std::cout << "La personne s'appelle "<< p1.surname << " " << p1.first_name <<std::endl;

    return 0;
}