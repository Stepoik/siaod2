#include <iostream>
#include "bitset"
#include "vector"

int main() {
    unsigned int maska = (1<<17)|(1<<15)|(1<<1);
	unsigned int value = 0xA512;
	std::cout << std::bitset<32>(value) << "\n";
	std::cout << std::bitset<32>(maska|value);
    return 0;
}
