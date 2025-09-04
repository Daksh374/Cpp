#include <iostream>
#include <vector>
using namespace std;

// Definition of a Node in the linked list
struct Node{
    public:
    int data;      // Data stored in the node
    Node* next;    // Pointer to the next node
    Node* back;
    
    public:
    Node(int data1 , Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    // Constructor to initialize node with data
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

// Converts a vector of integers to a doubly linked list
Node* ArrayToDLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i] , nullptr , prev);
        prev->next = temp;
        prev = temp;  
    }

    return head; 
}

void print(Node* head){

    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;        
    }
    cout << endl;
} 

// Insert Before Head
Node* insertHead(Node* head , int val){
    Node* newHead = new Node(val , head , nullptr);
    head->back = newHead;
    return newHead;
}

//Insert Before Tail
Node* insertTail(Node* head , int val){
    if(head->next == NULL){
        return insertHead(head , val);
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
    Node* newTail = new Node(val , tail , prev);
    prev->next = newTail;
    tail->back = newTail;
    return head;
}

//Insert Before Kth Element
Node* insertKthElement(Node* head , int k , int val){
    if(k == 1){
        return insertHead(head , val);
    }
    Node* temp = head;
    int cnt = 0; 
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp , prev);
    prev->next = newNode;
    temp->back = newNode;

    return head;
}

int main(){
    vector<int> arr = {7,3,2,5,6,8};         
    Node* head = ArrayToDLL(arr);   // Convert array to linked list
    head = insertKthElement(head , 6 , 10);
    print(head);
    return 0;
}