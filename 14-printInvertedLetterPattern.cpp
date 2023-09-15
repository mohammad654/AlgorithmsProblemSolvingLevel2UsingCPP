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

void printInvertedLetterPattern(int number){
cout<<"------------------------------------"<<endl;
for(int i=65+number-1;i>=65;i--){
    for(char j=1;j<=number-(65+number-1-i);j++)
         cout<<char(i);
      cout<<""<<endl;
}

}

int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";
printInvertedLetterPattern(readNumber("Please enter a positive number?"));

   // cout<<;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
