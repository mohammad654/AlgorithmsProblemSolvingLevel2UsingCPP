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
bool isPerfectNumber(int number){
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0)
            sum += i;
    }
return sum == number;
}

void printPerfectNumbers(int number){
    for(int i=1;i<=number;i++){
        if(isPerfectNumber(i))
            cout << i << " Is perfect number.\n";
    }
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printPerfectNumbers(readNumber("Please enter a positive number?"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
