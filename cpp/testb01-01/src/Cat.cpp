#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak()
{
    if (happy){
        cout << "Meaw" << endl;
    } else {
        cout << "Ssss" << endl;
    }
}

void Cat::makeHappy(){
    happy = true;
}

void Cat::makeSad(){
    happy = false;
}
