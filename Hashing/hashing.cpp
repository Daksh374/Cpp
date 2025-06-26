#include<iostream>
using namespace std;

int main(){
    int n; 
    cout << "how many elements to add in array -> ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Precompute
    int hash[13] = {0};
    for(int i = 0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int num;
    cout << "How many numbers to search in Array-> ";
    cin >> num;
    while(num--){
        int numbers;
        cout << "Enter number -> " ;
        cin >> numbers;

        // Fetch
        cout << numbers << " is present " << hash[numbers] << " time" << endl;
    }
    return 0;
    
}