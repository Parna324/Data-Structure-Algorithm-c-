#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 4, 5};  
    int size = 5;  
    int position = 0;  
    if (position < 0 || position >= size) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = position; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;  
        cout << "Updated Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
