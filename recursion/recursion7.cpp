#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
    int ans = 1;
    for(int i =1;i <= x;i++){
        ans = ans * i;
    }
    return ans;

}
int main(){
    int x =5;
    int result= factorial(x);
    cout << "The factorial of " << x << " is " << result;
}