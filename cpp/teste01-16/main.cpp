#include <iostream>
using namespace std;

class Machine{
private:
    int id;

public:
    Machine(): id(0) { cout << "Machine no argument constructor is called" << endl;}
    Machine(int id): id(id) { cout << "Machine parameterized constructor is called" << endl;}
    void info() {cout << "ID: " << id << endl;}
};

class Vehicle: public Machine{
public:
    Vehicle() { cout << "Vehicle no argument constructor is called" << endl;}
    Vehicle(int id): Machine(id){ cout << "Vehicle parameterized constructor is called" << endl;}
};


class Car: public Vehicle{
public:
    Car(int id): Vehicle(id) { cout << "Car no argument constructor is called" << endl;}

};


int main() {

    //Machine machine;

    Vehicle v(123);
    v.info();

    cout << endl;

    Car c(321);
    c.info();


	return 0;
}
