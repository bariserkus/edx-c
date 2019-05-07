#ifndef CAT_H
#define CAT_H

#include <iostream>
using namespace std;

namespace cats {

    const string CATNAME = "Freddie";

class Cat
{
    public:
        Cat();
        virtual ~Cat();
        void speak();

    protected:

    private:
};
} /* namespace cats */
#endif // CAT_H
