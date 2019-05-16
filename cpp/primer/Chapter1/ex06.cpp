#include <iostream>

using namespace std;
int main()
{
    int i = 42;
    double dVal = 50;
    const int &r = i;
    i = 5;
    const double *cptr = &dVal;
    //*cptr = 10;
    //r = 6;
    cout << i << endl;
    cout << r << endl;

    return 0;
}
