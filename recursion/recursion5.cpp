#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    int sum =0;
    for(int i =0; i <= n;i++){
        sum+= i;
    }
    cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
}
int main(){
    solve(4);
    solve(5);
}