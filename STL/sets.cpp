#include <iostream>
#include <set>
using namespace std;

// A SET STORED ELEMENTS IN SORTED ORDER AND STORE ONLY UNIQUE ELEMENTS

void explainSet(){
    set<int> st;
    st.insert(2);
    st.insert(6);
    st.insert(1);
    st.insert(3);
    st.emplace(5);  //{1,2,3,5,6}

    // begin(), end(), size(), empty(), swap() are same as vectors;

    //{1,2,3,4,5}
    auto it = st.find(3);
    
    auto it = st.find(6);  //It will return st.end() , i.e it will point to the element which is next to last

    //{1,2,5}
    st.erase(5);  //erases 5 and maintain sorted order  // take logarithmic time

    int cnt = st.count(2);  // if 2 is present then it will give 1 else it will give 0 

    //{1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);  //{1,4,5} [first , last)


}

// A MULTISET STORED ELEMENT IN SORTED ORDER BUT THE ELEMENTS ARE NOT UNIQUE IN IT
// IT CAN STORE MULTIPLE OCCURENCES IN IT

void multiSet(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);   //{1,1,1,1}

    ms.erase(1);   //Erases all 1's 

    //To erase only one element
    ms.erase(ms.find(1));

    // Rest all functions same as SETS

}


// UNORDERED SET STORES ELEMENTS IN AN UNSORTED WAY BUT ELEMENTS ARE UNIQUE
// IT HAS RANDOMISED ORDER
// FUNCTIONS ARE SAME AS STACK