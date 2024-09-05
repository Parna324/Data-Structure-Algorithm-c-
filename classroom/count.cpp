#include<bits/stdc++.h>
using namespace std;
class integermanipulator{
    public:
    int number;
    void set(int n){
        number = n;

    }
    int count(){
        int c = 0;
        int temp = number;
        while (temp != 0)
        {
            c++;
            temp /= 10;
        }
        return c;
        
    }
};
int main() {
    integermanipulator im;
    im.set(12345);
    cout << "Number of digits: " << im.count() << endl; 

    return 0;
}