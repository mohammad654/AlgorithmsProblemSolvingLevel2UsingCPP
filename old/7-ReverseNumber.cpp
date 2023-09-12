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

void ReverseNumber(int number) {
	int remainder = 0,reverse=0;
	while(number > 0) {
		remainder = number % 10;
		number = number / 10;
		//reverse = reverse * 10 + remainder;
		//cout << reverse ;
		cout << remainder ;
	}

}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	ReverseNumber(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
