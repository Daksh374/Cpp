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

// Remove kth element
Node* removeK(Node* head , int k){
    if(head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* prev = NULL;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

//Remove Element
Node* removeElement(Node* head , int el){
    if(head == NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    Node* prev = NULL;
    Node* temp = head;
    while(temp != NULL){
        
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

int main(){
    vector<int> arr = {7,3,2,5,6,8};         
    Node* head = arrayToLinkedList(arr);   // Convert array to linked list
    head = removeElement(head , 2);  
    print(head);                          
}