#include <iostream>
#include "bitset"
#include "vector"
#include "fstream"

void shuffle(std::vector<int> &values){
	srand(time(nullptr));
	for (int i = 0; i < values.size(); i++){
		int firstIndex = (int)((float)(rand()) / (float)(rand())*10000000)%values.size();
		int secondIndex = (int)((float)(rand()) / (float)(rand())*10000000)%values.size();
		int remember = values[firstIndex];
		values[firstIndex] = values[secondIndex];
		values[secondIndex] = remember;
	}
}

void createFile(int size = 10){
	std::vector<int> values;
	for (int i = 0; i < size; i++){
		values.push_back(i);
	}
	shuffle(values);
	std::ofstream file;
	file.open("hype.txt");
	file << size << " ";
	for (int i: values){
		file << i << " ";
	}
	file.close();
}

void sortFile(){
	std::ifstream needSortFile;
	std::ofstream sortedFile;
	needSortFile.open("hype.txt");
	sortedFile.open("sorted.txt");
	int size;
	needSortFile >> size;
	unsigned char zero = 0;
	int fragmentSize = sizeof(zero)*8;
	std::vector<unsigned char> fragments((size+fragmentSize-1)/fragmentSize);
	for (int i = 0; i < size; i++){
		int value;
		needSortFile >> value;
		int index = value/fragmentSize;
		fragments[index]|=((unsigned char)1)<<value%fragmentSize;
	}
	needSortFile.close();
	for (int j = 0; j < fragments.size(); j++){
		for (int i = 0; i < fragmentSize; i++){
			if (fragments[j]%2 == 1){
				sortedFile << j*fragmentSize+i << " ";
			}
			fragments[j]>>=1;
		}
	}
	sortedFile.close();
}

int main() {
//	createFile(10000000);
	sortFile();
    return 0;
}
