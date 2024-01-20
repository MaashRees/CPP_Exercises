#include <iostream>
#include <vector>
#include "Person.hpp"
int main(){
    std::string f_name;
    std::string surname;
    std::vector<Person> persons;
    std::cout << "Nombre de personnes: ";
    int taille;
    std::cin >> taille; 
    for(int i = 0; i < taille; i++){
        std::cout << "Prenom: ";
        std::cin >> surname;
        std::cout << "Nom: ";
        std::cin >> f_name;
        persons.push_back(Person(f_name, surname));
    }
    std::cout << "Les personnes sont ";
    for(int i = 0; i < taille; i++){
        if(i + 1 == taille){
            std::cout << persons[i].get_surname() << " " << persons[i].get_first_name() << "." << std::endl;
        } else {
            std::cout << persons[i].get_surname() << " " << persons[i].get_first_name() << ", ";
        }
    }
    return 0;
}