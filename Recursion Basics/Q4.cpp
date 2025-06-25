// Recursively Find the Sum of first N numbers 
#include <iostream>
using namespace std;

void FindSum(int i, int sum){           // let us suppose initial i = 3 , sum = 0 
    if(i < 0){
        cout << "Sum is -: " << sum << endl;
        return;
    }
    FindSum(i - 1 , sum + i);    
}

int main(){
    int n;
    cout << "Enter the value of n -> " ;
    cin >> n;
    FindSum(n,0);
}