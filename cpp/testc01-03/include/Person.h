#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
    public:
        Person(): name("Test"), age(15){};
        Person(string name, int age): name(name), age(age){};
        //Person(string newName){name = newName; age = 0;};
        //Person(string newName, int newAge){name = newName; age = newAge;};
        virtual ~Person();
        string getName();
        void setName(string newName);
        string toString();

    protected:

    private:
        string name;
        int age;

};

#endif // PERSON_H
