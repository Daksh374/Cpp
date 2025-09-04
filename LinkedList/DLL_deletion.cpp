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
// Delete Head
Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = head;
    head = head -> next;
    head -> back = nullptr;
    prev->next = nullptr;
    
    delete prev;
    return head;
}
// Delete From Tail
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    delete temp;
    return head;

}

// Delete Kth element
Node* removeKthElement(Node* head , int k){
    if(head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp -> next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL){
        delete temp;
        return NULL;
    }
    else if(prev == NULL){
        return deleteHead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    free(temp);
    return head;
}

// Delete element
Node* deleteElement(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;
    while(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return temp;
    }
    prev->next = front;
    front->back = prev;
    temp->next = temp->back = nullptr;
    free(temp);
    return temp;
}


int main(){
    vector<int> arr = {7,3,2,5,6,8};         
    Node* head = ArrayToDLL(arr);   // Convert array to linked list
    deleteElement(head->next->next->next);
    print(head);
    return 0;
}