#include <iostream>
#include <cmath>
using namespace std;

void printLetters(){
for(int i=65;i<=90;i++)
    for(int j=65;j<=90;j++)
           for(int k=65;k<=90;k++)
                cout<<char(i)<<char(j)<<char(k)<<endl;
}


int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";
        printLetters();

	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
