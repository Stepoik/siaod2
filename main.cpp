#include <iostream>
#include "bitset"

int main() {
    unsigned int value;
    std::cin >> value;
    unsigned int maska = ~0;
    maska = maska&(~((~(1 << 3))<<2));
    std::cout << std::bitset<32>(maska) << "\n";
    unsigned int newValue = value&maska;
    std::cout << std::bitset<32>(newValue);
    return 0;
}
