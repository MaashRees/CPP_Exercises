#pragma once

#include "PhoneNumber.hpp"

#include <string>


class PhoneBookEntry
{
public:
    PhoneBookEntry(const std::string& name , const PhoneNumber& pn )
        :_name {name}, _pn {pn}
        
    {
        
    }
    std::string get_name() const ;
    PhoneNumber get_number() const;
    
private:
    std::string _name;
    PhoneNumber _pn;
};
