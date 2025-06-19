#include<iostream>
#include<queue>
using namespace std;

//QUEUE USES FIFO APPROACH -> FIRST IN FIRST OUT

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.emplace(5);   //{1,2,4,5}

    q.back() += 5;
    cout << q.back();  // 10

    cout << q.front();    //1
    
    q.pop();  // {2,4,10}

    // size and swap are same as stack
}