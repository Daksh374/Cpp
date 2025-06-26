// Map hashing is beneficial as it take less space than number hashing
// It is because it stores only the numbers which are required

#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of array-> ";
    cin >> n;
    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    // Pre Computer
    map <int , int> mpp;
    for(int i = 0 ; i < n ; i++){
        mpp[arr[i]]++;
    }

    int query;
    cout << "How many numbers you want to search -> ";
    cin >> query;
    while(query--){
        int number; 
        cin >> number;

        // Fetch
        cout << number << " appears "<< mpp[number] << " times" << endl;
    }

    // Iteration in map (stores in sorted order)
    for( auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }


    return 0;
}

// TC of Map -> 0(logN) for all cases (worst , avg , best)
// TC of unordered Map -> 0(1) for (avg , best) , for worst -> 0(N)