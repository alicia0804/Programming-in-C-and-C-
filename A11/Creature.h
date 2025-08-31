/*
    CH-230-A
    a11.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/

#define CREATURE_H

#include <iostream>

using namespace std;

class Creature {
    public:
        Creature();  
        ~Creature();
        void run() const;

    protected:
        int distance;
};

class Wizard : public Creature {
    public:
        Wizard();
        ~Wizard();
        void hover() const;

    private:
        int distFactor;
};
//creating the class for fairy
class Fairy : public Creature {
    public:
        Fairy();//constructor and destructor
        ~Fairy();
        void fly() const;

    private:
        int distContor;
};
//creating the class for witch
class Witch : public Creature {
    public:
        Witch();
        ~Witch();
        void spell() const;

    private:
        int distMeter;
};

