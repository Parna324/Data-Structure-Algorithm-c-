#include <iostream>
using namespace std;

class IntegerManipulator {
private:
    int number;

public:
    void setNumber(int n) {
        number = n;
    }
    int countOddDigits() {
        int count = 0;
        int temp = number;
        while (temp != 0) {
            int digit = temp % 10;
            if (digit % 2 != 0) {
                count++;
            }
            temp /= 10;
        }
        return count;
    }
};

int main() {
    IntegerManipulator im;
    im.setNumber(12345);
    cout << "Number of odd digits: " << im.countOddDigits() << endl; 

    return 0;
}
