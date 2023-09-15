#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int randomNumber( int from, int to) {
int randNum = rand() % (to - from + 1) + from;
 return randNum;
}
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

int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";
	//Seeds the random number generator in C++, called only once
	 srand((unsigned)time(NULL));
    cout<<getRandomCharacter(enCharType::Digit) << endl;
    cout<<getRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout<<getRandomCharacter(enCharType::CapitalLetter) << endl;
    cout<<getRandomCharacter(enCharType::SmallLetter) << endl;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
