#include <iostream>
#include <string>

int counter(int value) {
	for (int index = 1; index < value; index++) {
		std::cout << "Counter: " << index << std::endl;
	}
	return 0;
}

std::string judge(int value) {
	if (value < 0) {
		return "Guilty";
	}
	else if (value > 0) {
		return "Not Guilty";
	}
	else {
		return "Neutral";
	}
}


int main() {
	std::string one = "Hello World \n";
	std::string two = "This is my first message";
	std::cout << one + two;
	std::cout << "\nEnter a number to count to: \n";
	int inputValue = 0;
	std ::cin >>inputValue;
	counter(inputValue);
	std::cout << (judge(inputValue));
	return 0; 
}