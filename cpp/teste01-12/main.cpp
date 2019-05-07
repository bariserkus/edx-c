//============================================================================
// Name        : New.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animals.h"

using namespace std;
//using namespace baris;
//using namespace cats;


int main() {

    //Cat cat;  // will not work if no namespace is used.
    //cat.speak();

    baris::Cat newcat;
    newcat.speak();

    cats::Cat newnewcat;
    newnewcat.speak();

    cout << baris::CATNAME << endl;
    cout << cats::CATNAME << endl;

    //cout << CATNAME << endl; // will not work without namepace

	return 0;
}
