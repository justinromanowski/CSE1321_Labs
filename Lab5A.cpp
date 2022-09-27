/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab5A
*/

//If else statements involving reading string inputs

#include <iostream>
#include <string>
using namespace std;

int main() {
  string input;
  cout << "Expieriencing severe symptoms (Y/N)? ";
  cin >> input;
  if (input == "Y"){
    cout << "Seek emergency care.";
  } else if (input == "N") {
    cout << "Close contact with someone who has COVID? ";
    cin >> input;
    if (input == "Y") {
      cout << "Quarantine and get tested if you feel sick";
    } else if (input == "N") {
      cout << "If you experience other symptoms, isolate and get tested.";
    }
  }
}
