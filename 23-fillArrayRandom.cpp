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
 cout<<" Original array  : " ;
for (int i = 0; i <length; i++)
         cout<<" "<<arr[i];
}

void checkRepeatedNumber(int arr[100],int length,int check){
int counter=0;
    for (int i = 0; i <length; i++){
          if(arr[i]==check)
                counter++;
    }
if(counter)
  cout<<"\nNumber "<<check<< " is repeated "<<counter<<" time(s)"<<endl;
  else
   cout<<"\nNumber "<<check<< " is Not  repeated "<<endl;
}

int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";

	 int arr[100];
	 int length,check;
	 readArray(arr,length);
	 printArray(arr,length);
	checkRepeatedNumber(arr,length,readNumber("\nEnter the number you want to check:"));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
