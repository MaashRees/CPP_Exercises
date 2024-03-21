#pragma once

#include <ostream>
#include <string>
#include <iostream>

class Material
{
public :
    /* Other method constructor
    Material(const std::string& name)
    :_name{name}
    {
        std::cout << name << " was created" << std::endl;
    }*/

    /*Mieux*/
    Material(std::string name)
    :_name{std::move(name)}
    {
        std::cout << _name << " was created" << std::endl;
    }

    ~Material(){
        std::cout << _name << " was destroyed" << std::endl;
    }
    // Affiche le nom d'un materiau.
    friend std::ostream& operator<<(std::ostream& stream, const Material& material) { 
        stream << material._name;
        return stream; 
    }
    std::string get_name() const{
        return _name;
    }
private:
        std::string _name;

};
