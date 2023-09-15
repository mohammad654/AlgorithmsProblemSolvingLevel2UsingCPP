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
void generateKeys(short numberOfKeys) {
    for (int i = 1; i <= numberOfKeys; i++){
        cout << "Key [" << i << "] : ";
        cout << generateKey() << endl;
    }
}
int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	 srand((unsigned)time(NULL));
        generateKeys(readNumber("Please enter how many keys to generate? \n "));
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}

