#include <iostream>

#include <cmath>

using namespace std;
void PrintWordsFromAAAtoZZZ()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}
}
int main()
{
	std::cout << "\n\n\n\n****************************************************\n\n";
	PrintWordsFromAAAtoZZZ();
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
/*
	cout<<""<<endl;

   g++ index.cpp -o index.exe

	index.exe

	16-PrintWordsFromAAAtoZZZ.cpp

	npp_save
cd /d "C:\C++\5- Algorithms&Problem-SolvingLevel2"
"C:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++.exe" "index.cpp" -o "index.exe"
cmd /c ""C:\C++\5- Algorithms&Problem-SolvingLevel2\index.exe""

  */