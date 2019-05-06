#include <sstream>
#include "Person.h"


/* Person::Person(): name("Test"), age(15){
    //age = 20;
    //name = "Baris";
} */

Person::~Person()
{
    //dtor
}

/*Person::Person(string name, int age): name(name), age(age){


    //this->name = name;
    //this->age = age;

    //cout << "Access name field of the the object using dereference: " << (*this).name << endl;
    //cout << "Access age field of the the object using dereference: " << (*this).age << endl;
    //cout << "Memory location of object :" << this << endl;
    //cout << "Memory location of name:" << &(this->name) << endl;
    //cout << "Memory location of age:" << &(this->age) << endl;
} */

string Person::getName(){
    return name;
}

void Person::setName(string newName){
    name = newName;
}

string Person::toString(){
    stringstream ss;

    ss << "Name: ";
    ss << name;
    ss << "; age: ";
    ss << age;
    return ss.str();
}
