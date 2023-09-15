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

void printSumReversedNumbers(int number){
int remainder=0;
    while(number>0){
        remainder+=number%10;
        number=number/10;
    }
    cout<<"Sum of reversed number = "<<remainder<<endl;
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printSumReversedNumbers(readNumber("Please enter a positive number?"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
