#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};

void traverse(Node* start) {
    while(start != NULL) {
        cout << start->data << ", ";
        start = start->next;
    }
    cout << endl;
}

// append at last
void append(Node** head, int data){
    Node* el = new Node();
    el-> data = data;
    el-> next = NULL;
    // if the list was empty
    if ((*head) == NULL) {
        (*head) = el;
        return;
    }
    // adding the element at the last of the list
    Node* last = (*head);
    while(last->next != NULL){
        last = last->next;
    }
    last->next = el;
    return;
}
Node* reverseLinkedList(Node* head) {
    Node* temp = head;
    Node* prev = NULL; // holds prev value 
    while(temp != NULL){
        Node* t = temp->next;
        temp->next = prev;
        prev = temp;
        temp = t;
    }
    return prev;
}

int main() {
    Node* head = NULL;
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);
    append(&head, 50);
    traverse(head);
    head = reverseLinkedList(head);
    traverse(head);
    return 0;
}