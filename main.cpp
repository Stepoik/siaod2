#include <iostream>
#include "bitset"
#include "vector"

int main() {
	int n;
	std::cin >> n;
	std::vector<unsigned int> values;
	for (int i = 0; i < n; i++) {
		unsigned int value;
		std::cin >> value;
		values.push_back(value);
	}
	unsigned char array = 0;
	for (unsigned int i: values) {
		array += 1 << (i);
	}
	int index = 0;
	for (int i = 0; i < 8; i++) {
		if (array%2 == 1){
			values[index] = i;
			index++;
		}
		array/=2;
	}
	for (unsigned int i: values) {
		std::cout << i << "\n";
	}
	return 0;
}
