#include "Person.h"

Person::Person()
{
    age = 20;
    name = "Baris";
}

Person::~Person()
{
    //dtor
}

string Person::getName(){
    return name;
}

void Person::setName(string newName){
    name = newName;
}
