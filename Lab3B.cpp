/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab3B
*/

//Create a college GPA calculator

#include <iostream>
#include <string>
using namespace std;

int main() {
  float course1H = 0.0f;
  float course2H = 0.0f;
  float course3H = 0.0f;
  float course4H = 0.0f;
  float course1G = 0.0f;
  float course2G = 0.0f;
  float course3G = 0.0f;
  float course4G = 0.0f;
  float totH = 0.0f;
  float totG = 0.0f;
  float gpa = 0.0f;

  cout << "Course 1 Hours: \n";
  cin >> course1H;
  cout << "Grade for course 1: \n";
  cin >> course1G;
  cout << "Course 2 Hours: \n";
  cin >> course2H;
  cout << "Grade for course 2: \n";
  cin >> course2G;
  cout << "Course 3 Hours: \n";
  cin >> course3H;
  cout << "Grade for course 3: \n";
  cin >> course3G;
  cout << "Course 4 Hours: \n";
  cin >> course4H;
  cout << "Grade for course 4: \n";
  cin >> course4G;

  totH = (course1H + course2H + course3H + course4H);
  totG = (course1H * course1G) + (course2H * course2G) + (course3H * course3G) + (course4H * course4G);
  gpa = (((course1H * course1G) + (course2H * course2G) + (course3H * course3G) + (course4H * course4G))/totH);

  cout << "Total hours is: " << totH << endl;
  cout << "Total quality points is: " << totG << endl;
  cout << "Your GPA for this semester is " << gpa;
}
