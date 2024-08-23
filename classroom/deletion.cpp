#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    N--;
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
    
}