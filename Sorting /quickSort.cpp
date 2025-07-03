#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr , int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qS(vector<int> &arr , int low , int high){
    if(low < high){
        int pIndex = partition(arr , low , high);
        qS(arr , low , pIndex - 1);
        qS(arr , pIndex + 1 , high);
    }
}

vector<int> quickSort(vector<int> arr){
    qS(arr, 0 , arr.size() - 1);
    return arr;
}

int main() {
    vector<int> arr = {9, 4, 8, 3, 1, 2, 5};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> sortedArr = quickSort(arr);

    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;
    cout << "Largest element is -: "<< sortedArr.back() << endl;    // TO FIND THE LARGEST ELEMENT OF ARRAY (BRUTE FORCE APPROACH)

    return 0;
}

// TC -> 0(NLogN)
// SC -> 0(1)