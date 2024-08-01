#include<bits/stdc++.h>
using namespace std;
int countnum(int n){
    int cnt =0;
    while(n>0){
        cnt = cnt + 1;
        n = n/10;
    }
    return cnt;
}
int main(){
    int m;
    cin >> m;
    cout << "m: " << m << endl;
    int digits = countnum(m);
    cout << "num of digits: " << digits << endl;
    return 0;
}
