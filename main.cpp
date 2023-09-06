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
    unsigned char zero = 0;
    std::vector<unsigned char> array = std::vector{zero, zero, zero, zero, zero, zero, zero, zero};
    for (unsigned int i: values) {
        int index = i / 8;
        array[index] += 1 << (i % 8);
    }
    int index = 0;
    for (int j = 0; j < array.size(); j++) {
        for (int i = 0; i < 8; i++) {
            if (array[j]%2 == 1){
                values[index] = j*8+i;
                index++;
            }
            array[j]/=2;
        }
    }
    for (unsigned int i: values) {
        std::cout << i << "\n";
    }
    return 0;
}
