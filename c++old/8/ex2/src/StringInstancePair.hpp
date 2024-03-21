#pragma once

#include <string>
#include "../lib/InstanceCounter.hpp"
#include "alias.hpp"

// class StringInstancePair
// {
// public:
//     StringInstancePair(std::string str) : _str(str){}

//     const std::string& get_str() const { return _str; }
//     const InstanceCounter& get_instance_counter() const { return *_instance_counter; }
// private:
//     std::string _str;
//     InstanceCounter* _instance_counter = new InstanceCounter{};
// };


class StringInstancePair
{
public:
    StringInstancePair(const std::string& str) : _str(str), _instance_counter(new InstanceCounter{}) {}
    StringInstancePair(const StringInstancePair& other) : _str(other.get_str()), _instance_counter(new InstanceCounter(other.get_instance_counter())){}

    const std::string& get_str() const { return _str; }
    const InstanceCounter& get_instance_counter() const { return *_instance_counter; }

private:
    std::string _str;
    PTR_ALIAS1 _instance_counter;
};