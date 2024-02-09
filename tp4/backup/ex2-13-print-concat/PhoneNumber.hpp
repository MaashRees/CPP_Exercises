#pragma once //protégé contre inclusions pultiples

#include <iostream>
#include <vector>

class PhoneNumber
{
public:
    PhoneNumber(int a, int b, int c, int d, int e)
        
    {
        numbers.emplace_back(a);
        numbers.emplace_back(b);
        numbers.emplace_back(c);
        numbers.emplace_back(d);
        numbers.emplace_back(e);
    };

    bool is_valid() const ;

    int operator[](int index) const
    {   int size = numbers.size();
        if(index < 0 || index >= size){
            return -1;
        }
        return numbers[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const PhoneNumber& pn)
    {   auto size = pn.numbers.size();
        for (auto i = 0u; i < size; i++){
            auto n = pn.numbers[i];
            if(n < 10){
                stream << "0" << n ;
            } else {
            stream << n;
            }
        }
        return stream;
    }
private:
    std::vector<int> numbers;
};

