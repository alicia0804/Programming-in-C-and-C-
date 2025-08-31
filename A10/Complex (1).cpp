/*
    CH-230-A
    a10.p8.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/

#include<iostream>
#include "Complex.h"

using namespace std;

//we set everything to 0
Complex::Complex(){
    real = imag = 0;
}

//we initialize them to a given couple, it isn't
//necessary to replicate the default values for the second 
//parameter
Complex::Complex(float r, float i) {
    real = r;
    imag = i;
}

//we copy the data members
Complex::Complex(Complex& nr) : real(nr.real), imag(nr.imag) {
}

//we empty the destructor
Complex::~Complex(){
}

void Complex::setRealpart(int newreal){
    real = newreal;
}

void Complex::setImagpart(int newimag){
    imag = newimag;
}

int Complex::getRealpart() {
    return real;
}

int Complex::getImagpart(){
    return imag;
}

//methods to perform operations on complex numbers
//we find the conjugate by leaving the real part 
//and multiply the imaginary part with -1
Complex Complex::conjugate(){
    Complex num;
    num.setRealpart(getRealpart());
    num.setImagpart((-1)*getImagpart());
    return num;
}

//we add 2 complex numbers using getter methods
Complex Complex::add(Complex &nr){
    Complex num;
    num.setRealpart(getRealpart() + nr.getRealpart());
    num.setImagpart(getImagpart() + nr.getImagpart());
    return num;
}

//we subtract 2 complex numbers
Complex Complex::sub(Complex &nr){
    Complex num;
    num.setRealpart(getRealpart() - nr.getRealpart());
    num.setImagpart(getImagpart() - nr.getImagpart());
    return num;
}

Complex Complex::multiply(Complex &nr){
    Complex num;
    num.setRealpart(getRealpart() * nr.getRealpart() - 
    getImagpart()*nr.getImagpart());
    num.setImagpart(getRealpart() * nr.getImagpart() + 
    getImagpart() * nr.getRealpart());
    return num;
}

void Complex::print(){
    if(imag) 
        cout << noshowpos << real << showpos << imag << "i" << endl;
    else{
        cout << noshowpos << real << showpos << endl;
    }
}
