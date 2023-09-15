#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;

int readNumber(string message){
      int number = 0;
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


void readArray(int arr[100],int length){

  for (int i = 0; i <length; i++)
            arr[i]=randomNumber(1,100);
}

void printArray(int arr[100],int length){
        cout<<"\nOriginal array  : " ;
    for (int i = 0; i <length; i++)
             cout<<" "<<arr[i];
}
int checkIndex(int arr[100],int length,int check){
  for (int i = 0; i <length; i++)
        if(arr[i]==check)
             return i;
  return 0;
}
void printIndex(int number,int numberPosition){
    if(numberPosition){
        cout << "\nNumber you are looking for is: " << number << endl;
        cout << "The number found at position: "<< numberPosition << endl;
        cout << "The number found its order  : "<< numberPosition + 1 << endl;
    }else{
     cout << "The number is not found :-(\n";
     }
}

int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	 srand((unsigned)time(NULL));
	 srand(static_cast<unsigned>(time(nullptr)));

	 int arr[100];
	 int length=readNumber("Please enter how many item in array?");
	readArray(arr,length);
	printArray(arr,length);
	 int check=readNumber("\nPlease enter a number to search for?");

    printIndex(check,checkIndex(arr,length,check));
 	//cout<<" check "<<checkIndex(arr,length,check)<<endl;

	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
