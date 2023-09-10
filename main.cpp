#include <iostream>
#include "bitset"

int main() {
	unsigned int value;
	std::cin >> value;
	unsigned int maska = ~0;
	maska = maska&(~((~(~0 << 3))<<2));
	std::cout << std::bitset<32>(value) << "\n";
	unsigned int newValue = value&maska;
	std::cout << std::bitset<32>(newValue);
	return 0;
}
