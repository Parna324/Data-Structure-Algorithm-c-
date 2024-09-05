#include <iostream>
using namespace std;

class AddAmount {
private:
    int balance;

public:
    
    AddAmount() {
        balance = 50;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Transaction successful!" << endl;
        cout << "New balance: " << balance << endl;
    }

    
    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    AddAmount customerAccount;

    customerAccount.displayBalance();


    int depositAmount;
    cout << "Enter amount to deposit: ";
    cin >> depositAmount;

    customerAccount.deposit(depositAmount);

    return 0;
}
