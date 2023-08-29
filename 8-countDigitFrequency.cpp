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
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	int number = readPositiveNumber("Please enter a positive number");
	int frequency = readPositiveNumber("Please enter one digit to check?");
	cout << "Digit " << frequency << " is frequency " << countDigitFrequency(frequency, number) << " time(s)" << endl;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
