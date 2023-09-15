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
length=readNumber("Please enter how many item in array?");
  for (int i = 0; i <length; i++)
        arr[i]=randomNumber(1,100);
}
void printArray(int arr[100],int length){
 cout<<"\nOriginal array  : " ;
for (int i = 0; i <length; i++)
         cout<<" "<<arr[i];
}

void copyArray(int arr2[100],int arr[100],int length){
    for (int i = 0; i <length; i++){
       arr2[i]=arr[i];
    }
}
void reversedArray(int arr[100],int length){
 cout<<"\nReversed array  : " ;
for (int i = length-1; i>=0; i--)
         cout<<" "<<arr[i];
}

int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";

	 int arr[100],arr2[100];
	 int length,check;
	readArray(arr,length);
	printArray(arr,length);
	copyArray(arr2,arr,length);
	printArray(arr2,length);
	reversedArray(arr,length);
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
