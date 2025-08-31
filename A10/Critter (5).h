/*
    CH-230-A
    a10.p2.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
	private:  // data members are private
		std::string name;
		int hunger;
		int boredom;
		double height;
        int age;
        int friends;

	public: // business logic methods are public
		// setter methods
		void setName(std::string& newname);
		void setHunger(int newhunger);
		void setBoredom(int newboredom);
        void setAge(int newage);
        void setFriends(int friends);
		// getter method
		int getHunger();
		// service method
		void print();
};