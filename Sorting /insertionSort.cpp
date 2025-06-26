#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertion_sort(int arr[], int n){
    for(int i = 0 ; i < n ; i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){        //j >0 && left > right
            swap(arr[j-1], arr[j]);
            j--;
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
    insertion_sort(arr , n);
    printArray(arr , n);

    return 0;

}

// TC -> worst and avg = 0(N^2)
// TC -> best = 0(N)