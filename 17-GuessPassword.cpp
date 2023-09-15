#include <iostream>
#include <cmath>
using namespace std;

string readPassword(string message) {
    cout << message << endl;
    string Password;
    cin >> Password;
    while (Password.length() != 3) {
        cout << "Password must be exactly 3 uppercase letters." << endl;
        Password="";
         cin>>Password;
    }
    return Password;
}

bool  GuessPassword(string originalPassword){
int counter = 0;
string word="";
for(int i=65;i<=90;i++){
    for(int j=65;j<=90;j++){
           for(int k=65;k<=90;k++){
                word =word+char(i);
                word =word+char(j);
                word =word+char(k);
                 counter++;
                 cout<< "Trial [" << counter << "] : "<<word<<endl;
                 if(word==originalPassword){
                     cout<<"\nPassword is "<<word<<" Found after "<<counter <<" Trial(s)\n";
                     return true;
                 }
                 word="";
           }
    }
}
  return false;
}

int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";
        GuessPassword(readPassword("Please enter a 3-Letter Password (all capital)?"));

	std::cout << "\n\n***************************************************\n\n";
	return 0;
}
