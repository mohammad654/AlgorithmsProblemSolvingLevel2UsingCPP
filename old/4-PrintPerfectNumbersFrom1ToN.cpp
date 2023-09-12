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
bool isPerfectNumber(int number) {
	int Sum = 0;
	for(int i = 1; i < number; i++) {
		if(number % i == 0) Sum += i;
	}
	return number == Sum;
}
void PrintPerfectNumbersFrom1ToN(int number) {
	for(int i = 1; i <= number; i++) {
		if(isPerfectNumber(i)) {		
			cout << i << " Is Perfect Number.\n";
		}
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintPerfectNumbersFrom1ToN(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}


   
