#include <iostream>
#include "bitset"

int main() {
    unsigned int value;
    std::cin >> value;
    unsigned int maska = 1 << 31;
    unsigned int n;
    std::cin >> n;
    maska = ~(maska>>(32-n-1));
    std::cout <<std::bitset<32>(maska) << "\n";
    std::cout << std::bitset<32>(maska&value);
    return 0;
}
