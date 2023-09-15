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


int reversedNumbers(int number){
int remainder=0;
string revers="";
    while(number>0){
        remainder =number%10;
        revers+=to_string(remainder);
        number=number/10;
    }
 return stoi(revers);
}
void printReversedNumber(int number){
cout<<"Reversed number = " <<number<<endl;

}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	//reversedNumbers(readNumber("Please enter a positive number?"))
	printReversedNumber(reversedNumbers(readNumber("Please enter a positive number?")));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
