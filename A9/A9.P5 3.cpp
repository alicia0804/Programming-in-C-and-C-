/*
    CH-230-A
    a9.p5.cpp
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  int n, cnt = 0, nr;
  string name;
  cout << "What is your name?";
  cin >> name;
  //generating a random number as input to be guessed
  srand(static_cast<unsigned int>(time(0)));
  nr = rand() % 100 + 1;
  cout << "Pick a number between 1 and 100";
  cin >> n;
  cnt++;//we count the number of tries

//if the number is different from what we are searching for
  while (n != nr) {
    if (n < nr)
      cout << "Too low!\n";
    else
      cout << "Too high!\n";
    cout << "Pick a number between 1 and 100";
    cin >> n;
    cnt++;
  }

  cout << "Congratulations " << name << "!";
  if (cnt == 1) //considering the case for the first try
    cout << "You won on the first try!";
  else
    cout << "You won on " << cnt << " tries!";

  return 0;
}