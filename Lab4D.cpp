/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab4D
*/

//Create a bill that calculates water usage & upcharge if you use certain high amounts

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int water = 0.0;
  int modwater = 0.0;
  int modwater2 = 0.0;
  float totdue = 0.0f;

  cout << "Gallons of water: ";
  cin >> water;
  modwater = (water % 1000);
  modwater2 = (water % 2000);
  
  if (water<=1000){
    totdue = (water*0.15);
    cout << "Water bill is: $" << totdue;
  } else if (1000<water && water<=2000){
    totdue = ((1000*0.15)+(modwater*0.25));
    cout << "Waterbill is: $" << totdue;
  } else {totdue = ((1000*0.15)+(1000*0.25)+(modwater2*0.35));
  cout << "Water bill is: $" << totdue;
  }
}
