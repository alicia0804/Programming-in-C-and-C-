/*
    CH-230-A
    a9.p3.cpp
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <iostream>
using namespace std;

//function that returns the absolute value
float myabs(float x) {
   if( x < 0 )
        return -x;//returns a positive value if x is negative
    else
        return x; 
}

int main() {
  float x;
  cin >> x;
  cout << myabs(x);//printing the result
  return 0;
}