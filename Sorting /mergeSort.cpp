#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr , int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    while(left <= mid){               // If elements are remaining on left
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){              // If elements are remaining on left
        temp.push_back(arr[right]);
        right++;
    }
    
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mS(vector<int>& arr, int low, int high){
    if(low >= high) return;
    int mid = (low + high) / 2;
    mS(arr , low , mid);
    mS(arr, mid+1 , high);
    merge(arr , low , mid , high);
}

void mergeSort(vector<int>& arr) {
    mS(arr, 0, arr.size()-1);
}

int main() {
    vector<int> arr = {5, 3, 8, 4, 2, 7, 1, 6};

    cout << "Original array: ";
    for(int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    mergeSort(arr);

    cout << "Sorted array: ";
    for(auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// TC -> 0(NlogN) for all cases
// SC -> 0(N) for all cases
