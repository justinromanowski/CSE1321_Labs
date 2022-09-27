/*
Class: CSE 1321L
Section: E02
Term: Spring 21
Instructor: Deeksha Koya
Name: Justin Romanowski
Lab#: Lab3C
*/

//Simple calculator that adds up various USD coins

#include <iostream>
#include <string>
using namespace std;

int main() {
  int p = 1;
  int n = 5;
  int d = 10;
  int q = 25;
  int pn = 0.0;
  int nn = 0.0;
  int dn = 0.0;
  int qn = 0.0;
  int totdol = 0.0;
  int totcent = 0.0;
  int tot = 0.0;

  cout << "Enter the number of quarters: ";
  cin >> qn;
  cout << "Enter the number of dimes: ";
  cin >> dn;
  cout << "Enter the number of nickels: ";
  cin >> nn;
  cout << "Enter the number of pennies: ";
  cin >> pn;

  cout << "You entered " << qn << " quarters.\n";
  cout << "You entered " << dn << " dimes.\n";
  cout << "You entered " << nn << " nickels.\n";
  cout << "You entered " << pn << " pennies.\n";

  tot = ((qn*q)+(dn*d)+(nn*n)+(pn*p));
  
  totdol = (tot / 100);
  totcent = (tot % 100);

  cout << "Your total is " << totdol << " dollars and " << totcent << " cents.";
   
}
