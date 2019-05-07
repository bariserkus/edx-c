//============================================================================
// Name        : New.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created." << endl;
	}

	Animal(const Animal& other) :
			name(other.name) {
		cout << "Animal created by copying." << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

Animal * createAnimal(){
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main() {

    int *pInt = new int;

    *pInt = 9;

    cout << *pInt << endl;

    delete pInt;



	Animal *pCat1 = new Animal();
	pCat1->setName("Freddy");
	pCat1->speak();
	delete pCat1;

	Animal *pAnimal = new Animal[10];

	pAnimal[5].setName("George");
	pAnimal[5].speak();

	delete [] pAnimal;

	char *pMem = new char[1000];
	delete [] pMem;

	cout << sizeof(pCat1) << endl;

	char c = 'a';
	c++;
	string name(2, c);

	cout << name << endl;

	return 0;
}
