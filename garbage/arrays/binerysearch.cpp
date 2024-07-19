//iterative binery search
#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[], int low, int high, int x){
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid]==x)
        return mid;

        if(arr[mid]<x)
        low = mid+1;

        else
        high = mid - 1;


        
    }
    return -1;

}
int main(void){
    int arr[] = {7,8,4,9,2};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarysearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;

}