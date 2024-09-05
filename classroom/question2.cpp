//you have to develop a software for an applicationthat will
// provide the functionality like 
// to set int 
// count the no of digits
// find the num of odd digits
// cal the sunm of odd digits in integer
// create a class name integermanipulator that will perform all these operations
#include <iostream>
using namespace std;

class IntegerManipulator {
public:
    int number;
    void set(int n) {
        number = n;
    }
    void display() {
        cout << "The current number is: " << number << endl;
    }
};

int main() {
    IntegerManipulator im;
    im.set(12345);
    im.display(); 
    return 0;
}
