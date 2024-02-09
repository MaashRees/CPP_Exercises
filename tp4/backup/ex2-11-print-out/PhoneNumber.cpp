#include "PhoneNumber.hpp"


bool PhoneNumber::is_valid() const {
    int size = numbers.size();
    for(auto i = 0; i<size;i++){
        if(numbers[i] > 99 || numbers[i] < 0){
            return false;
        }
    }
    return true;
}