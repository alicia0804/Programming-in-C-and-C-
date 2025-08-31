/*
    CH-230-A
    a11.p3.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/

#include "Creature.h"

int main()
{ 
    //creating a creature:
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    //creating a wizard:
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //creating a fairy
    cout << "\nCreating a Fairy.\n";
    Fairy fa;
    fa.run();
    fa.fly();

    //creating a witch
    cout << "\nCreating a Witch.\n";
    Witch we;
    we.run();
    we.spell();

    return 0;
}
