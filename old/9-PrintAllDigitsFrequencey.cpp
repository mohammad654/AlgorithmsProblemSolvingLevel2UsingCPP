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

int countDigitFrequency(int digitToCheck, int number) {
	int reapted = 0, remainder = 0;
	while(number > 0) {
		remainder = number % 10;
		number = number / 10;
		if(remainder == digitToCheck) 
			reapted++;
	}
	return reapted;
}
void PrintAllDigitsFrequencey(int number) {
	for(int i = 0; i < 10; i++) {
		int frequency = countDigitFrequency(i, number);
		if(frequency > 0) 
			cout << "Digit " << i << " is frequency " << frequency << " time(s)" << endl;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number = readPositiveNumber("Please enter a positive number");
	PrintAllDigitsFrequencey(number);
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
