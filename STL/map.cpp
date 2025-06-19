#include<iostream>
#include<map>
using namespace std;

// MAP IS A CONTAINER WHICH STORED UNIQUE KEYS SORTED DATA STRUCTURE BUT VALUES CAN BE SAME
// FOR EG -> IN A SCHOOL , NAMES CAN BE SAME BUT THEY ARE DISTINGUISHED BY UNIQUE KEYS

void explainMap(){
    map<int,int> mp;
    map<int , pair<int,int>> mp;
    map<pair<int, int> ,int> mp;

    mp[1] = 10;
    mp.insert({3,1});
    mp.emplace(2,4);


    for(auto it: mp){
        cout << it.first << " " << it.second << endl;
    }

    cout << mp[2];  // it will give 4
    cout << mp[5];  // it will return null/0;

}

// IN NULTIMAPS ALL THE FUNCTIONS ARE SAME AS MAPS BUT WE CAN STORE SAME KEYS ALSO