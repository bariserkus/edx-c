#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
    public:
        Person();
        virtual ~Person();
        string getName();
        void setName(string newName);

    protected:

    private:
        int age;
        string name;
};

#endif // PERSON_H
