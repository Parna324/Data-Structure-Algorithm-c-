#include <iostream>
using namespace std;

class IntegerManipulator {
public:
    int number;
    void set(int n) {
        number = n;
    }
    int count() {
        int count = 0;
        int temp = number;
        while (temp != 0) {
            count++;
            temp /= 10;
        }
        return count;
    }
};
int main() {
    IntegerManipulator im;
    im.set(12345);
    cout << "Number of digits: " << im.count() << endl; 

    return 0;
}
