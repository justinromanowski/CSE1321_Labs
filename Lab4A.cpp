/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab4A
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  string day;
  cout << "Enter the day: \n";
  cin >> day;
if (day == "Monday"){
  cout << "Sounds like someone has a case of the Mondays!";
} else if (day == "Wednesday"){
  cout << "It's hump day! El ombligo!";
} else if (day == "Friday"){
  cout << "Finally. It's Friday!";
} else cout << "It's another day of the week.";
}
