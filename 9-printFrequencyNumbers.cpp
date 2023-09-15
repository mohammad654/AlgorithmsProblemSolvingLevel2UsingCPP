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

void printFrequencyNumbers(int number){
for (short i=0;i<10;i++){
    if(frequencyNumber(i,number)>0)
    cout << "Digit "<<i<<" Frequencey is "<< frequencyNumber(i,number) << " Time(s).\n";
}
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";

	printFrequencyNumbers(readNumber("Please enter a positive number?"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
