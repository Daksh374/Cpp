#include<iostream>
using namespace std;

int getSum(int arr[] , int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[10];
    for(int i = 0; i < size ; i++){
        cin >> arr[i];
    }
    int sumArr = getSum(arr , size);
    cout << "Sum of Array is = "  << sumArr << endl;

    return 0;
}