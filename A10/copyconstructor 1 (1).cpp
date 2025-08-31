/*
    CH-230-A
    a10.p7.c
    Stirbu Alicia Florentina
    astirbu@constructor.university
*/
#include <iostream>
using namespace std;
class Object {
 private:
  int id;
  string name;

 public:
  Object() {
    id = 0;
    name = "test";
    //we add a message when the default critter is called
    //it doesn't have any parameters
    cout << "The default critter was called" << endl;
  }
  //we allow the constructor to add new values
  Object(const int newid, const string newname) {
    id = newid;
    name = newname;
    cout << "Critter called with parameters " << endl;
  }
  //copy constructor
  Object(const Object &obj) {
    id = obj.id;
    name = obj.name;
    cout << "Copy constructor called" << endl;
  }
  void setId(const int newid) { id = newid; }
  void print() {
    cout << "id=" << id << endl;
    cout << "name=" << name << endl;
  }

  ~Object() {
    cout << "Destructor invoked for the object with the id " 
    << id << endl;
  }
};
//we create a copy of the object and works with it locally but
//the object is not modified
void funcByVal(Object obj) {
  cout << "The function by value was called" << endl;
  obj.setId(111);
  obj.print();
}
//we work with the actual object (it gets modified)
void funcByRef(Object &obj) {
  cout << "The function by reference was called" << endl;
  obj.setId(340);
  obj.print();
}

int main(void) {
  cout << "First object created with default constructor" << endl;
  Object obj1;

  cout << "Second object that was created with parameters" << endl;
  Object obj2(22, "second obj");

  //we call the copy constructor
  cout << "Copy constructor was called" << endl;
  Object obj3 = obj2;
  //we call the function by value
  //and after that the function by reference
  cout << "Function by value has been called " << endl;
  funcByVal(obj1);

  cout << "Function by reference is being called" << endl;
  funcByRef(obj2);

  return 0;
}