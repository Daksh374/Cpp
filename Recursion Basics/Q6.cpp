// Swap an Array using Recursion
#include<iostream>
using namespace std;

void ArraySwap (int i , int n , int arr[]){
    if(i >= n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    ArraySwap(i+1, n, arr);
    
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter length of array ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);  

    ArraySwap(0, n,arr); 

    cout << "Swapped array: ";
    printArray(arr, n);  

}
