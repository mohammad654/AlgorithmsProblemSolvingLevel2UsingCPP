#include <iostream>

#include <cmath>

using namespace std;
int readPositiveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while(number < 0);
	return number;
}

void PrintDigits(int number) {
	int Remainder = 0;
	while(number > 0) {
		Remainder = number % 10;
		number = number / 10;
		cout << Remainder << endl;
		
	}

}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintDigits(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}