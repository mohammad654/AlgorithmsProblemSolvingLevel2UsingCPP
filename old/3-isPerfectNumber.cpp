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
void PrintResults(int number) {
	if(isPerfectNumber(number)) cout << number << " Is Perfect Number.\n";
	else cout << number << " Is NOT Perfect Number.\n";
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintResults(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}



