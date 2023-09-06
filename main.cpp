#include <iostream>
#include "bitset"

int main() {
    unsigned int value;
    std::cin >> value;
    unsigned int newValue = value << 6;
    std::cout << std::bitset<32>(newValue);
    std::cout << "\n" << newValue;
    return 0;
}
