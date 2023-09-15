#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;

int randomNumber( int from, int to) {
int randNum = rand() % (to - from + 1) + from;
 return randNum;
}

void readArray(int arr[100],int length){
  for (int i = 0; i <length; i++)
        arr[i]=randomNumber(1,100);
}

void printArray(int arr[100],int length){
 cout<<"\nOriginal array  : " ;
for (int i = 0; i <length; i++)
         cout<<" "<<arr[i];
}

void sumOfTwoArrayNumberInArray(int arr3[100],int arr2[100],int arr[100],int length){
    for (int i = 0; i <length; i++)
            arr3[i]=arr2[i]+arr[i];
}


int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";

	 int arr[100],arr2[100],arr3[100];
	 int length,length2;

	readArray(arr,4);
	printArray(arr,4);

	readArray(arr2,4);
	printArray(arr2,4);
    sumOfTwoArrayNumberInArray(arr3,arr2,arr,4);
	printArray(arr3,4);

	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
