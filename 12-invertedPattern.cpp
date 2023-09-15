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

void printInvertedPattern(int number){

for(int i=number;i>=1;i--){
    for(int j=1;j<=i;j++)
         cout<<i;
      cout<<""<<endl;
    }
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
printInvertedPattern(readNumber("Please enter a positive number?"));

   // cout<<;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
