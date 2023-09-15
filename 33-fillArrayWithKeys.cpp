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

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };
char getRandomCharacter(enCharType CharType) {
    switch (CharType) {
        case enCharType::SmallLetter: {
            return char(randomNumber(97, 122));
            break;
        }
        case enCharType::CapitalLetter: {
            return char(randomNumber(65, 90));
            break;
        }
        case enCharType::SpecialCharacter: {
            return char(randomNumber(33, 47));
            break;
        }
        case enCharType::Digit: {
            return char(randomNumber(48, 57));
            break;
        }
        default: {
            return '?';
        }
    }
}
string GenerateWord(enCharType CharType, short length) {
 string word;
  for (int i = 1; i <= length; i++){
        word = word + getRandomCharacter(CharType);
       }
       return word;
 }

string  generateKey() {
string key = "";
    key = GenerateWord(enCharType::CapitalLetter,4) + "-";
    key =key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key =key + GenerateWord(enCharType::CapitalLetter, 4) + "-";
    key =key + GenerateWord(enCharType::CapitalLetter, 4) ;
return key;
  }
void readArray(string arr[100],int length){

  for (int i = 0; i <length; i++)
            arr[i]=generateKey();
}

void printArray(string arr[100],int length){
        cout<<"\nOriginal array  : " <<endl;
    for (int i = 0; i <length; i++)
             cout<<"index [ "<<i+1<<" ] = " <<arr[i]<<endl;
}


int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	 srand((unsigned)time(NULL));
	     srand(static_cast<unsigned>(time(nullptr)));

	 string arr[100];
	 int length=readNumber("Please enter how many item in array?");
	readArray(arr,length);
	printArray(arr,length);



	std::cout << "\n\n***************************************************\n\n";
	return 0;
}