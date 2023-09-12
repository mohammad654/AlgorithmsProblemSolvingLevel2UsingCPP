#include <iostream>

#include <cmath>

using namespace std;
int readPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 0);
	return number;
}

int ReverseNumber(int number)
{
	int remainder = 0, reverse = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		reverse = reverse * 10 + remainder;
	}
	return reverse;
}

void PrintDigits(int number)
{
	int remainder = 0;
	while (number > 0)
	{
		remainder = number % 10;
		number = number / 10;
		cout << remainder << endl;
	}
}
int main()
{
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintDigits(ReverseNumber(readPositiveNumber("Please enter a positive number")));
	std::cout << "\n\n**************************************************\n\n";
	return 0;
}
