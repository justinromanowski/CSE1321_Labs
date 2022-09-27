/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab6A 
*/

//First time using do-while loops!

#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  do {
    cout << "Gimme a cookie: ";
    cin >> input;
  } while (!(input == "cookie"));
  return 0;
}
