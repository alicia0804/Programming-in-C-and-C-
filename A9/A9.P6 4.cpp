/*
    CH-230-A
    a9.p6.cpp
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <cstring>
#include <iostream>
using namespace std;

//if we find a positive number and even we return it
int myfirst(int a[]) {
  for (int i = 1; i <= 5; i++) {
    if (a[i] > 0 && a[i] % 2 == 0) return a[i];
  }
  return -1;
}

//if we find a negative number and without a fractional part
//we return it
double myfirst(double b[]) {
  for (int i = 0; i < 5; i++) {
    if (b[i] < 0 && b[i] == (int)b[i]) return b[i];
  }
  return -1.1;
}

//we find the first consonant
char myfirst(char c[]) {
  for (int i = 0; i <= 7; i++) {
    if (strchr("AEIOUaeiou", c[i]) == 0) return c[i];
  }
  return '0';
}

int main() {
  //declaring all the variables with the numbers
  //and printing the results
  int integers[] = {-2, -4, -6, 8, 80};
  double doubles[] = {1.2, -12.3, 34, -2, -1};
  char chars[] = {'A', 'B', 'c', 'y', 's', 'b', 'd'};

  cout << "Result of first function " << myfirst(integers) << "\n";
  cout << "Result of second function " << myfirst(doubles) << "\n";
  cout << "Result of third function " << myfirst(chars) << "\n";
  return 0;
}