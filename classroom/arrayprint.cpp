#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];


    cout << "Enter 5 elements: " << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    
    cout << "The elements you entered are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
