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

void readArray(int arr[100],int& length){
length=readNumber("Please enter how many keys to generate?");
  for (int i = 0; i <length; i++)
        arr[i]=randomNumber(1,100);
}
void printArray(int arr[100],int length){
 cout<<"\nOriginal array  : " ;
for (int i = 0; i <length; i++)
         cout<<" "<<arr[i];
}
enum enPrime{notPrime=0,prime=1};
enPrime checkPrime(int number){
    int m = round(number / 2);
        for(int i=2;i<=m;i++)
            if(number%i==0)
                return enPrime::notPrime;
return enPrime::prime;
}
void copyPrimeNumberInArray(int arr2[100],int arr[100],int length,int& length2){
int counter = 0;
    for (int i = 0; i <length; i++){
         if(checkPrime(arr[i])==enPrime::prime){
                arr2[counter]=arr[i];
                counter++;
         }
    }
      length2=--counter;
}


int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";

	 int arr[100],arr2[100];
	 int length,length2;
	readArray(arr,length);
	printArray(arr,length);
	copyPrimeNumberInArray(arr2,arr,length,length2);
	printArray(arr2,length2);



	std::cout << "\n\n***************************************************\n\n";
	return 0;
}

