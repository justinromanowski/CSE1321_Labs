/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab5C
*/

#include <iostream>
#include <string>
using namespace std;

//Figure out where a point is located on a cartesian coordinate system

int main() {
  int x = 0.0;
  int y = 0.0;
  cout << "Enter x: ";
  cin >> x;
  cout << "Enter y: ";
  cin >> y;

  if (x == 0 && y == 0){
    cout << "This point is the origin.";
  }   else if (x == 0 && y != 0) {
      cout << "This point is on the y axis.";
  }     else if (x != 0 && y == 0) {
        cout << "This point is on the x axis.";
  }       else if (x > 0 && y > 0){
          cout << "This point is in the first quadrant.";
  }           else if (x < 0 && y > 0) {
              cout << "This point is in the second quadrant.";
  }             else if (x < 0 && y < 0) {
                cout << "This point is in the third quadrant.";
  }               else if (x > 0 && y < 0) {
                  cout << "This point is in the fourth quadrant.";
  }
}
