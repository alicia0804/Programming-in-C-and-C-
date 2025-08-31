/*
    CH-230-A
    a10.p8.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/

#include <string>

class Complex {
    private:
        float real;//real part of a complex number
        float imag;//imaginary part of a complex number
    public: 
        Complex();//we have an empty constructor
        //it is taking values for real and imaginary parts
        Complex(float, float = 0);
        Complex(Complex& nr);
        ~Complex();

        //setter methods 
        void setRealpart(int newreal);
        void setImagpart(int newimag);

        //getter method
        int getRealpart();
        int getImagpart();

        //service method
        Complex add(Complex& num);
        Complex sub(Complex& num);
        Complex multiply(Complex& num);
        Complex conjugate();

        void print();
};
