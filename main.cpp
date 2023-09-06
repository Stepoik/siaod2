#include <iostream>
#include "bitset"

int main() {
    int value = 0x01F1;
    int newValue = value|0b101000000000000010;
    std::cout << std::bitset<32>(newValue);
    return 0;
}
