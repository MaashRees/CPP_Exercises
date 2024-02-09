#include "PhoneBookEntry.hpp"


std::string PhoneBookEntry::get_name() const {
    return _name;
}
PhoneNumber PhoneBookEntry::get_number() const{
    return _pn;
}