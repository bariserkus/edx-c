#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
    string pass = "bariserkus", inputString;

    cout << "Enter your password :" << flush;
    cin >> inputString;

    cout << "Input Pass : '" << inputString << "'" << endl;

    if (inputString == pass){
        cout << "Pass is correct !" << endl;
    } else if (inputString != pass){
        cout << "Pass is NOT correct !" << endl;
    }

    return 0;
}
