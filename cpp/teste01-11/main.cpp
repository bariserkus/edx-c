//============================================================================
// Name        : New.cpp
// Author      : John Purcell
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// could declare variables here: string num[] = {"apple", "orange", "banana"};

//void show1(string *ftext, int n){
void show1(string ftext[], int n){

    cout << sizeof(ftext) << endl; // returns the size of the pointer

    for (int i=0; i<n; i++){
        cout << ftext[i] << endl;
    }
}

void show3(string ftext[3]){

    cout << sizeof(ftext) << endl; // returns the size of the pointer

    for (int i=0; i<(sizeof(ftext)/sizeof(string)); i++){
        cout << ftext[i] << endl;
    }
}

char *getMemory(){
    char *pMem = new char[100];

    return pMem;
}

void freeMemory(char *pMem) {
    delete pMem;
}

int main() {

    string texts[] = {"apple", "orange", "banana"};

    cout << sizeof(texts) << endl;

    show1(texts, 3);

    char *pMemmmm = getMemory();
    //delete [] pMemory;
    freeMemory(pMemmmm);


	return 0;
}
