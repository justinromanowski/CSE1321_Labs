/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab3A
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
  float apr = 0.0f;
  float creditcard = 0.0f;
  
  cout << "Amount owed: $";
  cin >> creditcard;
  cout << "APR: ";
  cin >> apr;

  cout << "Monthly percentage rate: " << (apr / 12) << endl;
  apr = (apr / 100);
  cout << "Minimum payment: $" << (creditcard * apr / 12);
}
