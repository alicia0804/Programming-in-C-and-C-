/*
    CH-230-A
    a10.p5.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <string>

class Critter {
private:
    std::string name;
    double hunger;
    int boredom;
    double height;
    //we use private methods to convert int to double and back to int
    int UnHideconv();
    double Hideconv(int H);

public:
    Critter(); //default constructor
    Critter(std::string name); //constructor with name only
    //constructor with all parameters
    Critter(std::string name, double hunger, int boredom, double = 10.0); 

    //setter methods
    void setName(std::string& newname);
    void setHunger(double newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);

    //getter methods
    std::string getName();
    double getHunger();
    int getBoredom();
    double getHeight();

    //print method
    void print();
};

