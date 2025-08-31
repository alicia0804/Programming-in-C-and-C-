/*
    CH-230-A
    a10.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <iostream>
#include "City.h"

using namespace std;

//setter methods, updating the value of the private 
//attributes 
void City::setName(string newname) {
    name = newname;
}

void City::setNrinhabitans(int newnrinhabitans) {
    nrinhabitans = newnrinhabitans;
}

void City::setArea(double newarea) {
    area = newarea;
}

void City::setMayor(string newmayor) {
    mayor = newmayor;
}

//getter methods, returning the results
int City::getNrinhabitans() {
    return nrinhabitans;
}

double City::getArea() {
    return area;
}

string City::getName() {
    return name;
}

string City::getMayor() {
    return mayor;
}

//print method
void City::print() {
    cout << getName() << " has a population of " 
         << getNrinhabitans() << " inhabitants. "<<endl;
    cout << "The area is " << getArea() << " square kilometers"<<endl;
    cout << "The mayor of the city is " << getMayor() << "." << endl;
}
