#include <iostream>
#include <vector>
using namespace std;

// Definition of a Node in the linked list
struct Node{
    public:
    int data;      // Data stored in the node
    Node* next;    // Pointer to the next node
    
    public:
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
    public:
    // Constructor to initialize node with data
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* arrayToLinkedList(vector<int>& arr) {
    // Create the head node with the first element
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp; 
        mover = temp;     
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

// INSERT AT HEAD
Node* insertHead(Node* head,int val){
    return new Node(val , head);
   
}

// INSERT AT TAIL
Node* insertTail(Node* head , int val){
    if(head == NULL){
        return new Node(val);    // If list is empty, returns the value
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newnode = new Node(val);
    temp->next = newnode;
    return head;
}

// INSERT AT A GIVEN POSITION
Node* insertPosition(Node* head , int element , int k){
    if(head == NULL){
        return new Node(element);
    }
    if(k==1){
        return new Node(element , head);
        
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k-1){
            Node* newNode = new Node(element);
            newNode -> next = temp -> next;
            temp->next = newNode;
        }
        temp = temp->next;
    }
    return head;
}

// INSERT BEFORE A GIVEN VALUE
Node* insertBeforeValue(Node* head, int el, int val) {
    if (head == NULL) {
        return NULL;
    }

    if (head->data == val) {
        return new Node(el, head);
    }

    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == val) {
            Node* x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }

    return head;
}

int main(){
    vector<int> arr = {2,4,6,7,9,2};
    Node* head = arrayToLinkedList(arr);
    head = insertBeforeValue(head , 5 , 9);
    print(head);
}