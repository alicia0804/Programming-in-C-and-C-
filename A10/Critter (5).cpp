/*
    CH-230-A
    a10.p2.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <iostream>
#include "Critter.h"

using namespace std;
void Critter::setName(string &newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}
//using setter we update the new function
void Critter::setFriends(int newfriends){
	friends = newfriends;
}
//updating the printing function
void Critter::print() {
 cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
 cout << "I have " << friends << " friends. ";
 cout << "My age is " << age;
}
//using getter we update the function for age
void Critter::setAge(int newage){
	age = newage;
}

int Critter::getHunger() {
	return hunger;
}

