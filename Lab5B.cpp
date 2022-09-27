/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab5B
*/

//First time using case statements! Figure out what day the meeting is

#include <iostream>
#include <string>
using namespace std;

int main() {
  int day = 0.0;
  int dtm = 0.0;
  int meetingday = 0.0;
  cout << "Enter a number that represents today (Sunday==0, Monday==1,...) ";
  cin >> day;
  cout << "Enter the number of days until the meeting: ";
  cin >> dtm;
  
  meetingday = ((dtm+day)%7);
  
  switch (meetingday)
  {
    case 0:
    cout << "Meeting day is Sunday";
    break;
    case 1:
    cout << "Meeting day is Monday:";
    break;
    case 2:
    cout << "Meeting day is Tuesday";
    break;
    case 3:
    cout << "Meeting is Wednesday";
    break;
    case 4:
    cout << "Meeting is Thursday";
    break;
    case 5:
    cout << "Meeting is Friday";
    break;
    case 6:
    cout << "Meeting is Saturday";
    break;
  }
}
