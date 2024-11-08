#include <iostream>
using namespace std;

void swapAlternateElements(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        if(arr[i+1] < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array -> ";
    printArray(arr, size);

    swapAlternateElements(arr, size);

    cout << "Array after swap -> ";
    printArray(arr, size);

    return 0;
}
