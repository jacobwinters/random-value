#include <cstdlib>
#include <ctime>
#include <iostream>

#include "randomvalue.hpp"

int main() {
	std::srand(std::time(NULL));

	RandomInt x(10);
	for(int i = 0; i < 3; i++) {
		std::cout << "x = " << x << std::endl;
	}
	std::cout << "x + 2 = " << x + 2 << std::endl;
	std::cout << "3 * x = " << 3 * x << std::endl;

	RandomDouble y;
	for(int i = 0; i < 3; i++) {
		std::cout << "y = " << y << std::endl;
	}
	std::cout << "1 / y = " << 1 / y << std::endl;

	RandomBool b;
	if(b) {
		std::cout << "b is true";
		if(!b) {
			std::cout << " and also false";
		}
		std::cout << std::endl;
	}

	return 0;
}
