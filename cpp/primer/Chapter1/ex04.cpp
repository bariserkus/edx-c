#include <iostream>

using namespace std;
int main()
{
    int i = 10, j = 0;
    int *ptrVal = &i;
    int *ptrVal2 = 0;
    int **ptrToptr = &ptrVal;
    cout << ptrVal<< endl;
    *ptrVal = *ptrVal + *ptrVal;
    // ptrVal = ptrVal + ptrVal;   // Error
    cout << ptrVal << endl;
    cout << ptrToptr << endl;
    cout << *ptrToptr << endl;
    cout << **ptrToptr << endl;

    return 0;
}
