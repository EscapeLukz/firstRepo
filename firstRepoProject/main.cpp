#include <iostream>
#include <string>
//Decalration of functions
int funFunction(); 
int counter(int value);
int squareNum(int value);

int main() {
	funFunction();
}

int squareNum(int value) {
	return value * value;
}

int counter(int value) {
	for (int index = 1; index < value; index++) {
		std::cout << "Counter: " << index << std::endl;
	}
	return 0;
}

std::string judge(int value) {
	return (value == 67) ? "Guilty" : "Not Guilty";
}

int funFunction() {
	std::string one = "Hello World \n";
	std::string two = "This is my first message";
	std::cout << one + two;
	std::cout << "\nEnter a number to count to: \n";
	int inputValue = 0;
	std::cin >> inputValue;
	std::cout << (judge(inputValue));
	std::cout << " \n Time to count ! \n";
	counter(inputValue);
	return 0;
}