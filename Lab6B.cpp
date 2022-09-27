/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab6B 
*/

//Using while loop update min and max until 0 is inputted

#include <iostream>
#include <string>
using namespace std;

int main() {
  int input=1;
  int min=1001;
  int max=-1001;

  while (!(input==0)){
    cout << "Enter a number between -1000 and +1000: ";
    cin >> input;
    if (input>=max && input<=min){
      max=input;
      min=input;
      cout << "Min is " << min << endl << "Max is " << max << endl;
    } else if (input>=max) {
      max=input;
      cout << "Min is " << min << endl << "Max is " << max << endl;
    } else if (input<=min){
      min=input;
      cout << "Min is " << min << endl << "Max is " << max << endl;
    } else cout << "Min is " << min << endl << "Max is " << max << endl;
  }
  return 0;
}
