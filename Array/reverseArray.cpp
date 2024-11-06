#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap the elements at start and end indices
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}
void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);   //Inbulit Swapping Function
        start++;
        end--;
    }
}


void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {11, 22, 31, 42, 51};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);  // Call the function to reverse the array
    cout << "Reversed array: ";
    printArray(arr , size);

    reverse(arr, size);
    cout << "Reversed array:" << endl;
    printArray(arr , size);

    return 0;
}
