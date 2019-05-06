#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
    int value = 457;
    long int lValue = 1212312;
    short int sValue = 1232;
    unsigned int uIntValue = 1231;
    float fValue = 75.4;
    double dValue = 56.4;
    long double lDoubleValue = 218726.1238721;

    cout << "Number is : " << value << endl;
    cout << "Max int : " << INT_MAX << endl;
    cout << "Min int : " << INT_MIN << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Float : " << fixed << fValue << endl;
    cout << setprecision(20)<< "Float : " << scientific << fValue << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Double : " << fixed << dValue << endl;
    cout << setprecision(20)<< "Double : " << scientific << dValue << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Long Double : " << fixed << lDoubleValue << endl;
    cout << setprecision(20)<< "Double : " << scientific << lDoubleValue << endl;
    cout << "Size of long double : " << sizeof(long double) << endl;

    return 0;
}
