#include <iostream>
#include <stack>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

// Function to reverse using stack
Node* reverseLL(Node* head) {
    if (head == nullptr) return head;

    Node* temp = head;
    stack<int> st;
    while (temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }

    Node* temp1 = head;
    while (temp1 != NULL) {
        temp1->data = st.top();
        st.pop();
        temp1 = temp1->next;
    }
    return head;
}


// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Creating nodes manually
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    // Linking nodes
    head->next = second;
    second->back = head;
    second->next = third;
    third->back = second;
    third->next = fourth;
    fourth->back = third;

    cout << "Original List: ";
    printList(head);

    // Reverse the list
    head = reverseLL(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}

//TC -> 0(2N)