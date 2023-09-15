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

int getNumber(int number){
int remainder=0;
string numberOrder="";
    while(number>0){
        remainder =number%10;
        numberOrder+=to_string(remainder);
        number=number/10;
    }
 return stoi(numberOrder);
}
void printNumberOrder(int number){
int order=0;
    while(number>0){
        order =number%10;
        number=number/10;
        cout<<"Order "<<order<<endl;
    }

}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";

	printNumberOrder(getNumber(readNumber("Please enter a positive number?")));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
