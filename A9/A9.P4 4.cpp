/*
    CH-230-A
    a9.p4.cpp
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <cstring>
#include <iostream>

using namespace std;

//first function that returns the difference
int mycount(int x, int y) { 
    return y - x;
}

//second function that calculates the number of occurences
int mycount(char ch, const char* s) {
  int cnt = 0;
  int length = strlen(s);
  for (int i = 0; i < length; i++) {
    if (s[i] == ch) cnt++;//we add occurnces to counter
  }
  return cnt;
}

int main()
{
    int x = 7, y = 3; 
    //calls the overloaded function with numbers
    //should print -4
    cout << mycount(x,y) << endl; 
    //calls the function for searching i
    //should print 3
    cout << mycount('i', "this is a string") << endl;
  
  return 0;
}