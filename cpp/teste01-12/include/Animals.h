#ifndef ANIMALS_H
#define ANIMALS_H

#include <iostream>
using namespace std;

namespace baris {

    const string CATNAME = "Pebbles";

class Cat
{
    public:
        Cat();
        virtual ~Cat();
        void speak();

    protected:

    private:
};

} /* namespace baris */
#endif // ANIMALS_H
