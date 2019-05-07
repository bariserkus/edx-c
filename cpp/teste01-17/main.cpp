#include <iostream>
using namespace std;

class Test {
public:
    static int const MAX = 99;

private:
    int id;
    static int count;

public:
    Test(){
        id = ++count;
    }

    int getId(){
        return id;
    }

    static void showInfo(){
        cout << "Count: " << count << endl;
    }
};

//.cpp source
int Test::count = 0;


int main() {

    Test test1; // check static count when this is on
    cout << test1.getId() <<endl;

    Test test2; // check static count when this is on
    cout << test2.getId() <<endl;

    //cout << t.count << endl;

    //cout << Test::count << endl;

    cout << Test::MAX << endl;

    Test::showInfo();


	return 0;
}
