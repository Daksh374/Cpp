#include<iostream>
using namespace std;

bool search(int arr[], int size , int target){
    for(int i = 0 ; i < size; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;

}

int main(){
    int  arr[] = {4, 2, 0, -2, 10, 44, 23};

    cout <<" Enter the element to search for " << endl; 
    int target;
    cin >> target;

    bool found = search(arr, 10, target);

    if(found) {
        cout <<" Element is present "<< endl;
    }
    else{
        cout <<" Element is absent " << endl;
    }

    return 0;
}

