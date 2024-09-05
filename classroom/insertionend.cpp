#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5};  
    int size = 5;  

    int newelement;
    cin >> newelement; 

    if (size < 10) {  
        arr[size] = newelement;  
        size++;  
    } else {
        cout << "Array is full. Cannot insert element." << endl;
    }


    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
