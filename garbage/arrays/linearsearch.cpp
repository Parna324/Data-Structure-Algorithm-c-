#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return i;
        
        }
        return -1;

    }


}
int main(void){
    int arr[]= {45,23,43,78,98,66};
    int x = 98;
    int n= sizeof(arr)/ sizeof(arr[0]);
    int result = search(arr, n ,x);
    if(result == -1){
        cout << "Elements not found";
    }
    else{
        cout << "Elements found at index: " << result;
    }

}