#include<iostream>
using namespace std;
int main(){
    int arr[10]={7,8,9,4,3};
    int n=5;
    for(int i =6;i>1;i--){
        arr[i-1]=arr[i-2];
    }
    arr[0]=n;
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }
    return 0;

}