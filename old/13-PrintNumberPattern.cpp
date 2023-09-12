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
void PrintNumberPattern(int number) {
	for(int i = 1; i <= number; i++) {
		for(int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << endl;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintNumberPattern(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
