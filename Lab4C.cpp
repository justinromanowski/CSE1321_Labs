/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab4C
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Practice w/ if & else-if statements

int main() {
  int input = 0.0;
  
  cout << "Select from the following: \n" << 
  "To see a list of movies, press 1.\n" <<
  "To see show times, press 2.\n" <<
  "To pay your bill, press 3.\n" << 
  "Choice: ";
  cin >> input;

  if (input == 1){
    cout << "The Neverending Story 6\n" <<
    "Princess Diaries: the untold story\n" <<
    "Monty Python and the Programmer\n";  
  } else if (input == 2){
    cout << "All movies play at 3PM.";
  } else if (input == 3){
    cout << "Corporate accounts payable, Nina speaking.\n" << "Just a moment!";
  } else cout << "I'm sorry, Dave. I can't do that.";
}
