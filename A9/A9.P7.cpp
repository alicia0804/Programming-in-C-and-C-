 /*
    CH-230-A
    a9.p7.cpp
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <iostream>
using namespace std;

//we declare an auxiliar variable to store a and swap it
//with b
void swapping(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
} // swap ints

//we declare another variable to store x 
//and swap it with y
void swapping(float &x, float &y) {
    float aux2 = x;  
    x = y;
    y = aux2;
} // swap floats

//swapping 2 constant char pointers using another variable
void swapping(const char *&str1, const char *&str2) {  
    const char *aux = str1;  
    str1 = str2;
    str2 = aux;
} // swap char pointers

int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";  
    const char *str2 = "Two";

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;

    return 0;
}
