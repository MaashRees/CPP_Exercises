#include "ProgramData.hpp"


void ProgramData::add_material(std::string name)
{
    inventaire.push_back(std::make_unique<Material>(std::move(name)));

}

void ProgramData::get_materials(std::vector<const Material*>& materials) const
{
    for(auto index = 0; index < inventaire.size(); index++){

        auto m = inventaire[index].get();
        materials.push_back(m);
    }
}

void ProgramData::register_recipe(std::vector<std::string> materials, std::vector<std::string> products)
{}

void ProgramData::collect_doable_recipes(std::vector<const Recipe*>& recipes) const
{}

ProductionResult ProgramData::produce(size_t recipe_id)
{
    ProductionResult result;
    return result;
}