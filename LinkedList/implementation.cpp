#include <iostream>
#include <vector>
using namespace std;

// Definition of a Node in the linked list
struct Node{
    public:
    int data;      // Data stored in the node
    Node* next;    // Pointer to the next node
    
    public:
    // Constructor to initialize node with data
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

// Converts a vector of integers to a singly linked list
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

// Prints the linked list starting from head
void print(Node* head){
    while(head != NULL){
        cout << head -> data << " ";
        head = head -> next;        
    }
    cout << endl;
}

// Removes the head node from the linked list
Node* removehead(Node* head){
    if(head == NULL) return head; // If list is empty, return
    Node* temp = head;            
    head = head -> next;          
    free(temp);                  
    return head;                 
}

// Remove the TAIL of Linked List
Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL; // Check whether the list is empty or one element
    Node* temp = head;
    while(temp->next->next !=NULL){     // temp should point towards the second last element
        temp = temp -> next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}


int main(){
    vector<int> arr = {1,2,3,4,5};         
    Node* head = arrayToLinkedList(arr);   // Convert array to linked list
    head = removeTail(head);               
    print(head);                          
}