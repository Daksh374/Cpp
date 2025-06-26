#include<iostream>
using namespace std;

void printArray(int arr[] , int n){
    for (int i = 0; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}
void selection_sort(int arr[], int n){
    for(int i = 0; i <= n-2 ; i++){
        int mini = i;
        for(int j = i ; j<= n-1 ; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
    }
    
}

int main(){
    int n;
    cout << "Enter the length of array -> ";
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    
    cout << "Array before sorting -> ";
    printArray(arr , n);

    cout << "Array after sorting -> ";
    selection_sort(arr , n);
    printArray(arr , n);

    return 0;

}


// TC -> 0(N^2) for all cases