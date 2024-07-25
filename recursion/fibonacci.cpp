#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n;

    }
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    
}
int main(){
  
  
  int N = 4;
  cout<<fibonacci(N)<<endl;
  return 0;

}