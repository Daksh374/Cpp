// Find the SUM of first N numbers using functional recursion
#include<iostream>
using namespace std;

int FindSum(int n){
    if(n == 0){
        return 0;
    }
    return n + FindSum(n-1);
}

int main(){
    int n;
    cout << "Enter the value of n -> ";
    cin >> n;
    cout << FindSum(n) << endl;
}