#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = 1 ; i<=n ; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int  n, int r){
    int ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}

int main(){
    int n, r;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;
    cout<<"The value of nCr is: "<<nCr(n,r)<<endl;
    return 0;
}