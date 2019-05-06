#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

class Car {
public:
    void go(int);
    Car();
    ~Car();
private:
    int gas;
    int mile;
};

#endif // CAR_H_INCLUDED
