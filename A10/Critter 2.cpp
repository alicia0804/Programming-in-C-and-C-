/*
    CH-230-A
    a10.p4.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <iostream>
#include "Critter.h"

using namespace std;

//first critter that doesn't have any values to change 
Critter::Critter() {
    name = "default_critter";
    height = 5;
    boredom = 0;
    hunger = 0;
    cout << "Constructor with no parameters was called" << endl;
}

//the critter that only changes the name
Critter::Critter(string Name): name(Name) {
    height = 5;
    boredom = 0;
    hunger = 0;
    cout << "Constructor with name parameter was called" << endl;
}

//the critter that changes all the values (or leaves the height as default)
Critter::Critter(std::string Name, int newhunger, int newboredom,
double newheight) {
    name = Name;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
    cout << "Constructor with all parameters was called" << endl;
}

//setter methods
void Critter::setName(std::string& newname) {
    name = newname;
}

void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

void Critter::setBoredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setHeight(double newheight) {
    height = newheight;
}

//getter methods
std::string Critter::getName() {
    return name;
}

int Critter::getHunger() {
    return hunger;
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

void Critter::print() {
    cout << "I am " << name << endl;
    cout << "My hunger level is: " << hunger << endl;
    cout << "My boredom level is: " << boredom << endl;
    cout << "My height is " << height << " meters" << endl;
}
