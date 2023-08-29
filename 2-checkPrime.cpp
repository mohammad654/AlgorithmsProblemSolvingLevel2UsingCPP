#include <iostream>

#include <cmath>
using namespace std;

enum enCheckPrime {
	prime = 1, notprime = 2
};


int readPositiveNumber(string message) {
	int number;
	do {
		cout << message << endl;
		cin >> number;
	} while(number < 0);
	return number;
}

enCheckPrime CheckPrime(int number) {
	if(number <= 1) {
		return enCheckPrime::notprime; // 0 and 1 are not prime numbers
	}
	int M = round(number / 2);
	for(int Counter = 2; Counter <= M; Counter++) {
		if(number % Counter == 0) return enCheckPrime::notprime;
	}
	return enCheckPrime::prime;
}
void PrintPrimeNumbersFrom1ToN(int number) {

	
	for(int i = 1; i <= number; i++) {
	if(CheckPrime(i) == enCheckPrime::prime) {	
	
	cout << "Prime Numbers from " << 1 << " To " << number;
	cout << " are : " << endl;
		cout << i << endl;
	} else{
		cout << "There are no prime numbers from " << 1 << " To " << number;
		cout << " are : " << endl;
		
	}
}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintPrimeNumbersFrom1ToN(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
