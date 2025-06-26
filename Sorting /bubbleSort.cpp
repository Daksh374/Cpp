#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort(int arr[], int n){
    for(int i = n - 1; i > 0; i--){  
        for(int j = 0; j < i; j++){  
            if(arr[j] > arr[j+1]){   
                swap(arr[j+1], arr[j]);
            }
        }
    }
}

int main(){
    int n;
    cout << "Enter length of Array -> ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << "Array before sorting -> ";
    printArray(arr , n);

    cout << "Array after sorting -> ";
    bubble_sort(arr , n);
    printArray(arr , n);

    return 0;

}

// TC -> worst and avg = 0(N^2)
// TC -> best = 0(N)