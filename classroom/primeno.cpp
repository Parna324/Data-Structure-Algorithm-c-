#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , i , j=0;
    cout << "enter a positive number : ";
    cin >> n;
    if(n <=1){
        cout << n << "is not a prime number" << endl;
        return 0;
    }
    for(i=2;i <= n/2;++i){
        if(n %i == 0){
            j =1;
            break;

        }
    }
    if(j==0)
    cout << n << "is not a prime no" << endl;
    else
    cout << n << "is prime" << endl;
}