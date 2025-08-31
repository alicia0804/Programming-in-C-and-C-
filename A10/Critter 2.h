/*
    CH-230-A
    a10.p4.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <string>

class Critter {
    private:
        std::string name;
        int hunger;
        int boredom;
        double height;
    public:
        Critter();//default constructor
        Critter(std::string name);//constructor with name only
        //constructor with all parameters
        Critter(std::string name, int hunger, int boredom, double height = 10.0);

        //setter methods
        void setName(std::string& newname);
        void setHunger(int newhunger);
        void setBoredom(int newboredom);
        void setHeight(double newheight);

        //getter methods
        std::string getName();
        int getHunger();
        int getBoredom();
        double getHeight();

        //print method
        void print();
};
