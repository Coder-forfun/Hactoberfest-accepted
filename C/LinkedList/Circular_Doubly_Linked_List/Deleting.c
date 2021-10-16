// C++ program to delete a given key from
// circular doubly linked list.
#include <bits/stdc++.h>
using namespace std;
 
// Structure of a Node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
 
// Function to insert node in the list
void insert(struct Node** start, int value)
{
    // If the list is empty, create a single node
    // circular and doubly list
    if (*start == NULL) {
        struct Node* new_node = new Node;
        new_node->data = value;
        new_node->next = new_node->prev = new_node;
        *start = new_node;
        return;
    }
 
    // If list is not empty
 
    /* Find last node */
    Node* last = (*start)->prev;
 
    // Create Node dynamically
    struct Node* new_node = new Node;
    new_node->data = value;
 
    // Start is going to be next of new_node
    new_node->next = *start;
 
    // Make new node previous of start
    (*start)->prev = new_node;
 
    // Make last previous of new node
    new_node->prev = last;
 
    // Make new node next of old last
    last->next = new_node;
}
 
// Function to delete a given node from the list
void deleteNode(struct Node** start, int key)
{
    // If list is empty
    if (*start == NULL)
        return;
 
    // Find the required node
    // Declare two pointers and initialize them
    struct Node *curr = *start, *prev_1 = NULL;
    while (curr->data != key) {
        // If node is not present in the list
        if (curr->next == *start) {
            printf("\nList doesn't have node with value = %d", key);
            return;
        }
 
        prev_1 = curr;
        curr = curr->next;
    }
 
    // Check if node is the only node in list
    if (curr->next == *start && prev_1 == NULL) {
        (*start) = NULL;
        free(curr);
        return;
    }
 
    // If list has more than one node,
    // check if it is the first node
    if (curr == *start) {
        // Move prev_1 to last node
        prev_1 = (*start)->prev;
 
        // Move start ahead
        *start = (*start)->next;
 
        // Adjust the pointers of prev_1 and start node
        prev_1->next = *start;
        (*start)->prev = prev_1;
        free(curr);
    }
 
    // check if it is the last node
    else if (curr->next == *start) {
        // Adjust the pointers of prev_1 and start node
        prev_1->next = *start;
        (*start)->prev = prev_1;
        free(curr);
    }
    else {
        // create new pointer, points to next of curr node
        struct Node* temp = curr->next;
 
        // Adjust the pointers of prev_1 and temp node
        prev_1->next = temp;
        temp->prev = prev_1;
        free(curr);
    }
}
 
// Function to display list elements
void display(struct Node* start)
{
    struct Node* temp = start;
 
    while (temp->next != start) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
}
 
// Driver program to test above functions
int main()
{
    // Start with the empty list
    struct Node* start = NULL;
 
    // Created linked list will be 4->5->6->7->8
    insert(&start, 4);
    insert(&start, 5);
    insert(&start, 6);
    insert(&start, 7);
    insert(&start, 8);
 
    printf("List Before Deletion: ");
    display(start);
 
    // Delete the node which is not present in list
    deleteNode(&start, 9);
    printf("\nList After Deletion: ");
    display(start);
 
    // Delete the first node
    deleteNode(&start, 4);
    printf("\nList After Deleting %d: ", 4);
    display(start);
 
    // Delete the last node
    deleteNode(&start, 8);
    printf("\nList After Deleting %d: ", 8);
    display(start);
 
    // Delete the middle node
    deleteNode(&start, 6);
    printf("\nList After Deleting %d: ", 6);
    display(start);
 
    return 0;
}
