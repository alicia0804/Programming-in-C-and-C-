/*
    CH-230-A
    a10.p6.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <iostream>
#include "Critter.h"

using namespace std;

//we call the default critter that doesn't call any parameters
Critter::Critter() {
    name = "default_critter";
    height = 5;
    boredom = 0;
    hunger = 0;
    thirst = 0;
    cout << "Constructor with no parameters was called" << endl;
}

//the critter that only modifies the name 
Critter::Critter(string Name): name(Name) {
    height = 5;
    boredom = 0;
    hunger = 0;
    thirst = 0;
    cout << "Constructor with name parameter was called" << endl;
}

//the critter that modifies 4 variables 
Critter::Critter(std::string Name, double h, int b, double hg){
    name = Name;
    hunger = Hideconv(h);
    boredom  = b;
    height = hg;
    thirst = hunger;
    cout << "Constructor with 4 parameters was called" << endl;
}

//function that turns into int
int Critter::UnHideconv(){
    return ((int)(hunger * 10));
}
//function that turns into double
double Critter::Hideconv(int H){
    return ((double)H) / 10;
}

//critter that modifies all the variables
Critter::Critter(std::string Name, double h, int b, double hg, double t) {
    name = Name;
    hunger = Hideconv(h); 
    boredom = b;
    height = hg;
    thirst = Hideconv(t);
    cout << "Constructor with all 5 parameters was called" << endl;
}

//setter methods
void Critter::setName(std::string& newname) {
    name = newname;
}

void Critter::setHunger(double newhunger) {
    hunger = Hideconv(newhunger);
}

void Critter::setThirst(double newthirst){
    thirst = Hideconv(newthirst);
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
    return (int)(hunger * 10);
}

int Critter::getThirst() {
    return (int)(thirst * 10);
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

//print method
void Critter::print() {
    cout << "I am " << name << endl;
    cout << "My hunger level is: " << getHunger() << endl;
    cout << "My boredom level is: " << boredom << endl;
    cout << "My height is " << height << " meters" << endl;
    cout << "My thirst level is " << getThirst() << endl;
}
