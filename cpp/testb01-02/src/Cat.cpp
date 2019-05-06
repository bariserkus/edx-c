#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat(){
    cout << "Cat Created..." << endl;
    happy = true;
}

Cat::~Cat(){
    cout << "Cat Destroyed..." << endl;
}

void Cat::speak()
{
    if (happy){
        cout << "Meaw" << endl;
    } else {
        cout << "Ssss" << endl;
    }
}
