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
enum enPrime{notPrime=0,prime=1};
enPrime checkPrime(int number){
    int m = round(number / 2);
    for(int i=2;i<=m;i++){
    if(number%i==0)
        return enPrime::notPrime;
    }
    return enPrime::prime;
}
void printPrimeNumbers(int number){
   cout<< "Prime numbers from "<<1<< " To " << number<<endl;
   for(int i=1;i<=number;i++){
       if(checkPrime(i)==enPrime::prime)
          cout<<"prime "<<i<<endl;
   }
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	printPrimeNumbers(readNumber("enter a number to print all prime number from 1 to entered number "));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
