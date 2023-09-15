#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;

float readNumber(string message){
      float number = 0;
       while(number<=0){
        cout<<message<<endl;
        cin>>number;
        }
    return number;
}
float GetFractionPart(float number) {
    return number - int(number);
 }
int MyRound(float number){
int IntPart;
  IntPart = int(number);
    float FractionsPart = GetFractionPart(number);
     if (abs(FractionsPart)>=.5)
          if (number> 0)
                return ++IntPart;
          else
                return --IntPart;
      else
      return IntPart;

}

int MyFloor(float number) {
    if (number > 0)
        return int(number);
    else
        return int(number) - 1;
 }
int main() {
	std::cout << "\n\n  \n\n****************************************************\n\n";

    float number = readNumber("Please enter a positive number?");
    cout << "My Round Result : " << MyRound(number) << endl;
    cout << "C++ Round Result: " << round(number) << endl;

    cout << "My Floor Result : " << MyFloor(number) << endl;
    cout << "C++ Floor Result: " << floor(number) << endl;

	std::cout << "\n\n***************************************************\n\n";
	return 0;
}