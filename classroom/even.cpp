#include <iostream>
#include <cmath>

using namespace std;
class numcheck{
    private:
    int num;
    public:
    numcheck(int num){}
    void checkeven(){
        if(num % 2 ==0){
            cout << "Even" << endl;
        }
        else{
            cout << "odd"<< endl;
        }
    }
};
int main(){
    int num;
    // cout << "Enter the number: "<< num;
    cin >> num;
    numcheck checker(num);
    checker.checkeven();
}