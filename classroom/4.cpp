#include <iostream>
using namespace std;

class IntegerManipulator {

public:
    int number;
    void set(int n) {
        number = n;
    }

    int sumodd() {
        int sum = 0;
        int temp = number;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 != 0) {
                sum += digit;
            }
            temp /= 10;
        }
        return sum;
    }
};

int main() {
    IntegerManipulator im;
    im.set(12345);
    cout << "Sum of odd digits: " << im.sumodd() << endl; 

    return 0;
}
