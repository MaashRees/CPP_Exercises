#include "Card.hpp"
#include <iostream>

int main(){
    const Card c1 { 8, "Pique" };
    c1.print();

    const Card c2 { 8, "Carreau" };
    std::cout << (c2 == c1) << std::endl; // -> 1
    const Card c3 { 10, "Carreau" };
    std::cout << (c2 == c3) << std::endl; // -> 0 
    std::cout << (c1 < c2) << std::endl; // -> 0
    std::cout << (c1 < c3) << std::endl; // -> 1
    std::cout << (c3 < c1) << std::endl; // -> 0
    const Card c4 { 12, "Pique" };
    c4.print();
    std::cout << c4 << std::endl;
}

//g++ -o main main.cpp Card.cpp Card.hpp