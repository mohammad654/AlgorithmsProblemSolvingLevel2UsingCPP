#include <iostream>

#include <cmath>

using namespace std;
void PrintWordsFromAAAtoZZZ() {
	string letters = " ";
	for(int i = 65; i <= 90; i++) {
		for(int j = 65; j <= 90; j++) {
			for(int k = 65; k <= 90; k++) {
				letters = letters + char(i);
				letters = letters + char(j);
				letters = letters + char(k);
				cout << letters << endl;
				letters=" ";
			}
		}
		cout << endl;
	}
}
int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintWordsFromAAAtoZZZ();
	
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
