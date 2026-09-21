#include <iostream>
#include <string>

int counter(int value) {
	for (int index = 1; index < value; index++) {
		std::cout << "Counter: " << index << std::endl;
	}
	return 0;
}

std::string judge(int value) {
	return (value == 67) ? "Guilty" : "Not Guilty";
}


int main() {
	std::string one = "Hello World \n";
	std::string two = "This is my first message";
	std::cout << one + two;
	std::cout << "\nEnter a number to count to: \n";
	int inputValue = 0;
	std ::cin >>inputValue;
	std::cout << (judge(inputValue));
	std::cout << " \n";
	counter(inputValue);
	return 0; 
}