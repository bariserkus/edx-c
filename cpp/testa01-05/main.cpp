#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
    bool bValue = true;
    cout << "B Value : " << bValue << endl;

    char cValue = 'a';
    cout << "Character : " << cValue << endl;

    cValue = 671;
    cout << "Character : " << cValue << endl;


    cValue = 671;
    cout << "Character : " << (int) cValue << endl;

    cout << "Size of char : " << sizeof(char) << endl;

    wchar_t wCharValue = 'f';

    cout << "W Character : " << (char) wCharValue << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    return 0;
}
