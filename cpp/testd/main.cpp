#include <iostream>

using namespace std;

void manipulate(double * ptvalue){
    cout << "2. Value of double in manipulate : " << *ptvalue << endl;
    * ptvalue = 10.0;
    cout <<  "3. Value of double in manipulate : " << *ptvalue << endl;
}

int main()
{
    int nValue = 8;

    int * pnValue = &nValue;

    //nValue = 9;

    cout << "Int Value : " << nValue << endl;
    cout << "Pointer to Int address: " << pnValue << endl;

    cout << "Int value via pointer : " << *pnValue << endl;

    cout << "Int value via pointer : " << pnValue[0] << endl;

    double dValue = 123.4;

    cout << "1. dValue : " << dValue << endl;
    manipulate(&dValue);
    cout << "4. dValue: " << dValue << endl;
    return 0;
}
