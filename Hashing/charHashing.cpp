// Character Hashing
#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    // Pre Computer
    int hash[25] = {0};
    for (int i = 0 ; i < s.size() ; i++){
        hash[s[i] - 'a']++;              // Formula -> 'a' - 'a' = 0  , 'b' - 'a' = 1 -> therefore.. char - 'a'
    }
    int query; 
    cin >> query;
    while(query--){
        char c; 
        cin >> c;

        // Fetch
        cout << c << " appears " << hash[c - 'a']<< " times" << endl;
    }
}


// If there are both upper and lowers case characters , then hash[256] and it will be solved normally without formula
// i.e hash[s[i]] and hash[c]