#include <iostream>
#include <cmath>

using namespace std;

class NumberChecker {
private:
    int number;

public:
    
    NumberChecker(int num) : number(num) {}

    
    void checkEvenOdd() {
        if (number % 2 == 0) {
            cout << number << " is Even." << endl;
        } else {
            cout << number << " is Odd." << endl;
        }
    }

    void checkPrime() {
        if (number <= 1) {
            cout << number << " is not Prime." << endl;
            return;
        }
        bool isPrime = true;
        for (int i = 2; i <= sqrt(number); i++) {
            if (number % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << number << " is Prime." << endl;
        } else {
            cout << number << " is not Prime." << endl;
        }
    }

   
    void checkArmstrong() {
        int sum = 0, temp = number, digits = 0;
        while (temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = number;
        while (temp != 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }
        if (sum == number) {
            cout << number << " is an Armstrong number." << endl;
        } else {
            cout << number << " is not an Armstrong number." << endl;
        }
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    
    NumberChecker checker(num);

    
    checker.checkEvenOdd();
    checker.checkPrime();
    checker.checkArmstrong();

    return 0;
}

