/*
    CH-230-A
    a10.p6.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <string>

class Critter {
private://private components of the critter
    std::string name;
    double hunger;
    int boredom;
    double height;
    int UnHideconv();
    double Hideconv(int H);
    double thirst;

public:
    Critter();//default critter
    //critter that only changes the name 
    Critter(std::string name);
    //critter that leaves the height as default
    Critter(std::string name, double hunger, int boredom, double = 10.0);
    //critter that modifies all the variables
    Critter(std::string name, double hunger, int boredom, 
    double height, double thirst);

    //setter methods
    void setName(std::string& newname);
    void setHunger(double newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    void setThirst(double newthirst);

    //getter methods
    std::string getName();
    int getHunger();
    int getThirst();
    int getBoredom();
    double getHeight();

    void print();
};
