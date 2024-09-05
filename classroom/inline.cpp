#include<bits/stdc++.h>
using namespace std;
class operation{
    public:
    int a,b,add;
    void get(){
        cout << "Enter 1 value: ";
        cin >>a;
        cout << "Enter 2 value: ";
        cin >>b;

    }
    void sum();
}s;
inline void operation::sum(){
    add = a+b;
    cout <<"Addition of two numbers: "<<a+b;
}
int main(){
    cout << "Program using inline function\n";
    s.get();
    s.sum();
    return 0;
}
// john is developing a banking application that 
// allows customer to diposit their money into th account the 
// bank provides eash customer with an 
// initial balance of 50 create a 
// claass called add amount this classkk,l./
// shows a transaction to add A SPECIFIC 
// Amount of money to customer account after 
// the transaction is completed the total amount 
// in the customer account is printed