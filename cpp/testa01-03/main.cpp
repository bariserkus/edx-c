#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int value = 457;
    long int lValue = 1212312;
    short int sValue = 1232;
    unsigned int uIntValue = 1231;

    cout << "Number is : " << value << endl;
    cout << "Max int : " << INT_MAX << endl;
    cout << "Min int : " << INT_MIN << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    return 0;
}
