#include <iostream>
#include "bitset"

int main() {
    unsigned int value;
    std::cin >> value;
    unsigned int maska = 0;
    maska-=1;
    maska-=(32+16+8);
    std::cout << std::bitset<32>(maska) << "\n";
    unsigned int newValue = value&maska;
    std::cout << std::bitset<32>(newValue);
    return 0;
}
