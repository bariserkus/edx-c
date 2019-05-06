#include <iostream>

using namespace std;

int main()
{
    string text = "This is some text";
    cout << text << endl;

    string input;

    cout << "Enter your name:" << flush;

    cin >> input;

    cout << "You entered : " << input << endl;

    int numValue;

    cout << "Enter a number : " << flush;

    cin >> numValue;

    cout << "You entered the number : " << numValue << endl;
    return 0;
}
