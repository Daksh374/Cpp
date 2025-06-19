#include<iostream>
#include <queue>
using namespace std;

// IN PQ, THE LARGEST ELEMENT IS STORED AT THE TOP , ELEMENTS ARE NOT ADDED LINEARLY
// IT FOLLOWS A TREE STRUCTURE TO STORE THE ELEMENTS IN THE QUEUE

void explainPQ(){
    priority_queue<int> pq;
    pq.push(2);                           // PUSH AND POP TC => o(logn)
    pq.push(4);
    pq.push(10);
    pq.push(6);  //{10,6,4,2}

    cout << pq.top();  //10      // TC => O(1)

    pq.top();   //{6,4,2}

    //  SIZE AND SWAP FUNCTIONS ARE SAME AS OTHERS

    // FOR MINIMUM HEAP
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(2);
    pq.push(4);
    pq.push(3);
    pq.push(8);  //{2,3,4,8}
}