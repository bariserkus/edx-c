#include <iostream>

using namespace std;

int main()
{
    int numberCats = 5;
    int numberDogs = 4;
    int numberAnimals = numberCats + numberDogs;
    string text = "This is some text", text1 = "text1", text2 = "text2", text3 = text1 + text2;
    cout << "program starts" << flush;
    cout << "Hello world!" << endl;
    cout << "Thats a new line" << "Another text" << "More Text" << endl;
    cout << "This is some text" << endl;
    cout << "Number of Cats :" << 2*numberCats << endl;
    cout << "Number of Dogs :" << 2*numberDogs << endl;
    cout << "Total : " << numberCats + numberDogs << endl;
    numberDogs++;
    cout << "Number of Dogs :" << numberDogs << endl;
    cout << text3 << endl;
    return 0;
}
