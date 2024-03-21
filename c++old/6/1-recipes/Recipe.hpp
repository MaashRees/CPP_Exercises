#pragma once

#include <ostream>
#include <vector>
#include <string>
#include <iostream>

class Recipe
{
    public:
        Recipe(std::vector<std::string> materials, std::vector<std::string> products, size_t id)
        : _materials{std::move(materials)}, _products{std::move(products)}, _id{id}{
            std::cout << "Recipe " << _id << " was created"<<std::endl;
        }
        ~Recipe(){
            std::cout << "Recipe " << _id << " was destroyed" <<std::endl;
        }

        std::vector<std::string> get_p()const {
            return std::move(_products);
        }
        std::vector<std::string> get_m()const {
            return std::move(_materials);
        }
        size_t get_id()const {
            return _id;
        }

    // Affiche l'identifiant et la formule d'une recette.
    friend std::ostream& operator<<(std::ostream& stream, const Recipe& recipe) { 
        auto id = recipe.get_id();
        auto products = recipe.get_p();
        auto materials = recipe.get_m();

        stream << "(" << id << ") ";
        for(auto m : materials){
            stream << m << " ";
        }
        stream << "=> ";
        for(auto p : products){
            stream << p << " ";
        }
        
        return stream; 
    }

    private:
        std::vector<std::string> _materials;
        std::vector<std::string> _products;
        size_t _id;

};
