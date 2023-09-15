#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;

int readNumber(string message){
     int number;
       while(number<=0){
        cout<<message<<endl;
        cin>>number;
        }
    return number;
}

int randomNumber( int from, int to) {
int randNum = rand() % (to - from + 1) + from;
 return randNum;
}
void printRandomNumber(int number){
cout<<"Random number  "<<number<<endl;
}


int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	 srand((unsigned)time(NULL));
    int from = readNumber("Please enter a number to generate a random number from:");
    int to = readNumber("Please enter a number to generate a random number to:");
	printRandomNumber(randomNumber(from,to));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
