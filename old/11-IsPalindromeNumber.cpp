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

int ReverseNumber(int number) {
	int remainder = 0, reverse = 0;
	while(number > 0) {
		remainder = number % 10;
		number = number / 10;
		reverse = reverse * 10 + remainder;
	}
	return reverse;
}

bool IsPalindromeNumber(int number){
return number == ReverseNumber(number);	
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	if(IsPalindromeNumber(readPositiveNumber("Please enter a positive number?"))) 
		cout << "\nYes , it is a Palindrome number.\n";
	else
	    cout << "\nNo , it is NOT a Palindrome number.\n";

	std::cout << "\n\n***************************************************\n\n";
	return 0;
}


 