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
void PrintLetterPattern(int number) {
	for(int i = 65; i <= 65 + number - 1; i++) {
		for(int j = 1; j <= i - 65 + 1; j++) {
			cout << char(i);
		}
		cout << endl;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintLetterPattern(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
