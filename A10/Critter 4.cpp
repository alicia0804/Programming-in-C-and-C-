/*
    CH-230-A
    a10.p5.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <iostream>
#include "Critter.h"

using namespace std;

//constructing the critter with no parameters
Critter::Critter() {
    //naming the variables as it was mentioned and setting them to 0
    name = "default_critter";
    height = 5;
    boredom = 0;
    hunger = 0;
    cout << "Constructor with no parameters was called" << endl;
}

//construct the critter with name parameter
//setting the height to 5 and rest to 0
Critter::Critter(string Name): name(Name) {
    
    height = 5;
    boredom = 0;
    hunger = 0;
    cout << "Constructor with name parameter was called" << endl;
}
//critter for all parameters without the height

//construct critter with all the parameters
Critter::Critter(std::string Name, double h, int b, double hg){
    name = Name;
    hunger = Hideconv(h);
    boredom  = b;
    height = hg;
    cout << "Constructor with all parameters was called" << endl;
}
//we return the integer value by multiplying it with 10
int Critter::UnHideconv(){
    return ((int)(hunger*10));
}
//we return the double value by dividing it with 10
double Critter::Hideconv(int H){
    return ((double)H)/10;
}

//setter methods
void Critter::setName(std::string& newname) {
    name = newname;
}

void Critter::setHunger(double newhunger) {
    hunger = Hideconv(newhunger);
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

double Critter::getHunger() {
    return UnHideconv();
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

//print method to show all the properties
void Critter::print() {
    cout << "I am " << name << endl;
    cout << "My hunger level is: " << getHunger() << endl;
    cout << "My boredom level is: " << boredom << endl;
    cout << "My height is " << height << " meters" << endl;
}
