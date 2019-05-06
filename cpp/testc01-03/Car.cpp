#include <iostream>
#include "Car.h"

using namespace std;

Car::Car(){
    gas = 40;
    mile = 0;
    cout << "Car is manufactured. Gas = " << gas << ", Mileage = " << mile << endl;
}

Car::~Car(){
    cout << "Car is demolished" << endl;
}

void Car::go(int milesGone){
    gas = gas - milesGone*0.1;
    mile =+ milesGone;
    cout << "Car drove. Gas = " << gas << ", Mileage = " << mile << endl;
}
