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


int frequencyNumber(short digitToCheck, int number){
int counter=0;
int remainder=0;
   while(number>0){
        remainder =number%10;
        if(remainder==digitToCheck)
          counter++;
        number=number/10;
    }
 return counter;
}

void printFrequencyNumber(int number){
cout<<"Frequency number  " <<number<<endl;
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
    int number=	readNumber("Please enter a positive number?");
    short digitToCheck=	readNumber("Please enter one digit to check?");
	printFrequencyNumber(frequencyNumber(digitToCheck,number));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
