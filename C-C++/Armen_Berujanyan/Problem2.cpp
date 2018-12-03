#include <iostream>
#include <string>
#include <algorithm>
#include <random>

int main() {
	std::random_device rd;

	int num, div;
	std::cin >> num >> div;
	std::string str = std::to_string(num);
	int biggest = -1, nbiggest = -1;
	std::string new_str = str;
	for (int tries = 0; tries < 5000; tries++) {
		new_str = str;
		while (new_str.size() > 1) {
			auto i = std::uniform_int_distribution<>(0, new_str.size() - 1)(rd);
			new_str.erase(new_str.begin() + i);
			auto new_num = std::atoi(new_str.c_str());
			if ((new_num == 0 ? true : new_num > div) && (new_num % div == 0) && (new_num > nbiggest)) {
				nbiggest = new_num;
			}
		}
	}

	biggest = nbiggest;
	std::cout << biggest << std::endl;

	return 0;
}