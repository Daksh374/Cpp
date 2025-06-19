#include<iostream>
#include <stack>
using namespace std;

// STACK FOLLOW LIFO APPROACH -> LAST IN FIRST OUT

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);  //{3,3,2,1}
    st.emplace(5);   //{5,3,3,2,1}

    cout << st.top();  //Returns the topmost element of the stack , st[2] is not allowed (indexed based search)
    
    st.pop();   // {3,3,2,1}
    st.pop();   // {3,2,1}

    cout << st.size(); //3
    cout << st.empty(); //TRUE OR FALSE

    stack<int> st1,st2;
    st1.swap(st2);
     

}