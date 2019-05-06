#include <iostream>
#include "Cat.h"

using namespace std;

int main()
{
    cout << "start program ..." << endl;

    {
        Cat bob;
        bob.speak();
    }

    cout << "end program ..." << endl;
    return 0;
}
