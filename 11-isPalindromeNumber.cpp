#include <iostream>
#include <cmath>
using namespace std;

int readNumber(string message){
     int number;
       while(number<=0){
        cout<<message<<endl;
        cin>>number;
        }
    return number;
}
int reversedNumber(int number){
int remainder=0;
string numberOrder="";
    while(number>0){
        remainder =number%10;
        numberOrder+=to_string(remainder);
        number=number/10;
    }
 return stoi(numberOrder);
}
bool isPalindromeNumber(int number){
return number==reversedNumber(number);
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
bool checkPalindrome=isPalindromeNumber(readNumber("Please enter a positive number?"));
    if(checkPalindrome)
        cout << "\nYes, it is a Palindrome number.\n";
    else
        cout << "\nNo, it is NOT a Palindrome number.\n";

   // cout<<;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
