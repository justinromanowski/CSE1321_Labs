/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab7A
*/

//first time utilizing arrays

#include <iostream>
#include <string>
using namespace std;

int main() {
  int input;
  cout << "Enter the size of the array: ";
  cin >> input;

  int arraySQ[input--];
  for (int arrayIncrease = 0; arrayIncrease <= input; arrayIncrease++) {
    arraySQ[arrayIncrease] = (arrayIncrease*arrayIncrease);
    cout << "|" << arraySQ[arrayIncrease]; 
  } 
  return 0;
} 
