// Write a recursive function to check Palindrome 
#include<iostream>
using namespace std;

bool palindrome(int i , string &s){
    if(i >= s.size() / 2){
        return true;
    }
    if( s[i] != s[s.size() - i - 1]){
        return false;
    }
    return palindrome(i+1 , s);
}

int main(){
    string s = "madam";
    cout << palindrome(0 , s);
    return 0;
}