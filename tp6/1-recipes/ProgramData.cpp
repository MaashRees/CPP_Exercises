#include "ProgramData.hpp"


void ProgramData::add_material(std::string name)
{
    _inventaire.push_back(std::make_unique<Material>(std::move(name)));

}

void ProgramData::get_materials(std::vector<const Material*>& materials) const
{
    for(auto index = 0; index < _inventaire.size(); index++){

        auto m = _inventaire[index].get();
        materials.push_back(m);
    }
}

void ProgramData::register_recipe(std::vector<std::string> materials, std::vector<std::string> products)
{
    auto size = _recipes.size();
    auto id = size + 1;
    auto recipe = std::make_unique<Recipe>(std::move(materials), std::move(products), id); 
    _recipes.push_back(std::move(recipe));
    std::cout <<"Recipe "<< id << " was been registered" << std::endl;
}

bool inInventaire(std::string name, std::vector<const Material*> inventaire){
    for (auto m : inventaire){
        if(m->get_name() == name){
            return true;
        }
    }
    return false;
}
void ProgramData::collect_doable_recipes(std::vector<const Recipe*>& recipes) const
{   
    auto inventaire = std::vector<const Material*> {};
    for(auto index = 0; index < _recipes.size(); index++){

        auto r = _recipes[index].get();
        bool add= true;
        auto materials = r->get_m();
        
        get_materials(inventaire);
        for(auto m : materials){
            if(inInventaire(m, inventaire) == false){
                add = false;
                break;
            }
        }
        if(add){

            recipes.push_back(r);
        }
    }
}

ProductionResult ProgramData::produce(size_t recipe_id)
{
    ProductionResult result;
    return result;
}