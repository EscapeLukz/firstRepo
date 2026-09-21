#include <string>
#include <iostream>
#include "extraFunctions.h"

int counter(int value) {
	for (int index = 1; index < value; index++) {
		std::cout << "Counter: " << index;
	}
	return 0;
}

std::string judge(int value) {
	return (value == 67) ? "Guilty" : "Not Guilty";
}

int funFunction() {
	int inputValue = 0;
	std::string one = "Hello World \n";
	std::string two = "This is my first message";

	std::cout << sizeof(one) << " Bytes \n";

	std::cout << one + two;
	std::cout << "\nEnter a number to count to: ";

	std::cin >> inputValue;
	std::cout << (judge(inputValue));
	std::cout << " \nTime to count ! \n";
	std::cout << sizeof(inputValue) << " Bytes \n";
	counter(inputValue);
	return 0;
}