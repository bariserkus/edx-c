#include <iostream>
#include "Car.h"
#include "Person.h"

using namespace std;

int main()
{
    cout << "Program started" << endl;

    {
        Car honda;
        honda.go(10);
    }

    {
        Person kid;
        cout << "Kids name is: " << kid.getName() << endl;
        kid.setName("Emek");
        cout << "Kids name is: " << kid.getName() << endl;

    }

    cout << "Program finished" << endl;
    return 0;
}
