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

void checkMaxNumber(int arr[100],int length){
int max=0;
    for (int i = 0; i <length; i++){
          if(arr[i]>max)
               max=arr[i];
    }
  cout<<"\nMax number in Array is "<<max<<endl;
}
void checkMinNumber(int arr[100],int length){
int min;
for(int i=0;i<length;i++){
    if(arr[i]<min)
        min=arr[i];
    }
   cout<<"\nMin number in Array is "<<min<<endl;
}
int  sumArray(int arr[100],int length){
int sum=0;
        for(int i=0;i<length;i++)
             sum +=arr[i];
  return sum;
}

int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";

	 int arr[100];
	 int length,check;
	readArray(arr,length);
	printArray(arr,length);
	checkMaxNumber(arr,length);
	checkMinNumber(arr,length);
    cout<<"\nSum of array items is "<<sumArray(arr,length)<<endl;
    cout<<"\nAverage of array items is "<<sumArray(arr,length)/length<<endl;

	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
