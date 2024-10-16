#include <iostream>
using namespace std;

void cyclicShiftRight(int arr[], int size, int shift) {
    shift = shift % size;
    int temp[shift];
    
    for (int i = 0; i < shift; i++) {
        temp[i] = arr[size - shift + i];
    }
    
    for (int i = size - 1; i >= shift; i--) {
        arr[i] = arr[i - shift];
    }
    
    for (int i = 0; i < shift; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[25];
    
    for (int i = 0; i < 25; i++) {
        arr[i] = i + 1;
    }
    
    cout << "Initial array: " << endl;
    for (int i = 0; i < 25; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cyclicShiftRight(arr, 25, 3);
    
    cout << "Array after cyclic shift by 3 positions to the right: " << endl;
    for (int i = 0; i < 25; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}