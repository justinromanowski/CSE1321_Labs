/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab4B
*/

//Create a simple calculator that calculates earnings + overtime pay

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int hours = 0.0;
  int modhours = 0.0;
  int earnings = 0.0;
  cout << "Number of hours this week: \n";
  cin >> hours;

  modhours = (hours % 40);
if (hours<=40){
  earnings = (15*hours);
  cout << "Earnings: " << earnings;
} else {
    earnings = ((15*40)+(modhours*25));
    cout << "Earnings: " << earnings;
}
}
