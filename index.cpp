#include <iostream>
#include <cmath>
using namespace std;
int readNumber(string message){
     int number;
       while(number<=0){
        cout<<message<<endl;
        cin>>number;
        }
    return number;
}

bool isPerfectNumber(int number){
    int sum=0;
    for(int i=1;i<number;i++){
        if(number%i==0)
            sum += i;
    }
return sum == number;
}
void printPerfectNumbers(int number){
    if(isPerfectNumber(number))
        cout << number << " Is perfect number.\n";
    else
        cout << number << " Is NOT perfect number.\n";
}
int sum(int a,int b){
return a+b;
}

int main() {
	std::cout << "\n\n\n\n****************************************************\n\n";
	cout<<"C++ 5"<<endl;
	printPerfectNumbers(readNumber("Please enter a positive number?"));
//	cout<<"a+b = "<<sum(1,2)<<" using C++"<<endl;
	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
/*
 	cout<<""<<endl; 

    g++ index.cpp -o index.exe
    .\index.exe
    g++ 1-multiplicationTable.cpp -o 1-multiplicationTable.exe
    .\1-multiplicationTable.exe


$env:PATH += ";C:\Programmeren\C++\mosh"
3-isPerfectNumber.cpp
  */


//C++
//  int sum(int a,int b){return a+b;}
//  cout<<"a+b = "<<sum(1,2)<<" using C++"<<endl;
//Java
//  public static int sum(int a, int b) {return a + b;}
//  System.out.println("a + b = " + sum(1, 2) + " using Java");
//C#
//  public static int Sum(int a, int b) {return a + b;}
//  Console.WriteLine("a + b = " + Sum(1, 2) + " using C#");
