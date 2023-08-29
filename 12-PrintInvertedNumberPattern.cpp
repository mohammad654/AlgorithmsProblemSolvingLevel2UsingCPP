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
void PrintInvertedNumberPattern(int number) {
	for(int i = number; i >= 1; i--) {
		//cout<<"i ="<<i<<endl;
		for(int j = 1; j <= i; j++) {
			cout << i;
			//	cout<<"j ="<<j<<endl;
		}
		cout << endl;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintInvertedNumberPattern(readPositiveNumber("Please enter a positive number"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
