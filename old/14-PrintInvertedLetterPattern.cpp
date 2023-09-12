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
void PrintInvertedLetterPattern(int number) {
		for(int i =65+number-1; i >= 65; i--) {
		
		for(int j = 1; j <= number - (65 + number - 1 - i); j++) {
			cout << char(i);
		}
		cout << endl;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintInvertedLetterPattern(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
