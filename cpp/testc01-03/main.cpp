#include <iostream>
#include "Car.h"
#include "Person.h"

using namespace std;

int main()
{
    cout << "Program started" << endl;

    {
        Person person1;
        Person person2("Bob", 42);
        //cout << "Person 2, Memory Location" << &person2 << endl;
        Person person3("Jack", 20);
        //cout << "Person 3, Memory Location" << &person3 << endl;


        cout << person1.toString() << endl;
        cout << person2.toString() << endl;
        cout << person3.toString() << endl;

    }

    cout << "Program finished" << endl;
    return 0;
}
