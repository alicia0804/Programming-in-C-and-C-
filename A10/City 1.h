/*
    CH-230-A
    a10.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/

#include <string>

class City
{
private:
    std::string name; 
    int nrinhabitans;  
    double area;       
    std::string mayor; 

public:
    //setter methods
    void setName(std::string newname);
    void setNrinhabitans(int newnrinhabitans);
    void setArea(double newarea);
    void setMayor(std::string newmayor);

    //getter methods
    std::string getName();
    int getNrinhabitans();
    std::string getMayor();
    double getArea();

    //service method
    void print();
};
