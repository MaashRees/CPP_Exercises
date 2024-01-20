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
