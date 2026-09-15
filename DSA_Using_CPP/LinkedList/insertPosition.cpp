#include <iostream>
using namespace std;

typedef struct Node {
    int data;
    Node *next;
} Node;


// Create a new node
Node* createNode(int value) {
    Node *newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}


// Insert at a specific position
void insertAtPosition(Node *&head, int value, int position) {

    // Error 1: Negative position
    if (position < 0) {
        cout << "Error: Position cannot be negative." << endl;
        return;
    }


    // Case 1: Insert at position 0
    if (position == 0) {

        Node *newNode = createNode(value);

        newNode->next = head;
        head = newNode;

        cout << "Node inserted successfully." << endl;
        return;
    }


    // If list is empty and position is not 0
    if (head == NULL) {
        cout << "Error: Position out of range. "
             << "Empty list only allows position 0." << endl;
        return;
    }


    // Move to the node just before the required position
    Node *temp = head;

    for (int i = 0; i < position - 1; i++) {

        // Position is beyond the list
        if (temp == NULL || temp->next == NULL) {
            cout << "Error: Position out of range." << endl;
            return;
        }

        temp = temp->next;
    }


    // Create new node
    Node *newNode = createNode(value);

    // Connect new node
    newNode->next = temp->next;

    // Connect previous node to new node
    temp->next = newNode;

    cout << "Node inserted successfully." << endl;
}


// Display linked list
void display(Node *head) {

    if (head == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}


int main() {

    Node *head = NULL;

    // Creating initial list
    insertAtPosition(head, 10, 0);
    insertAtPosition(head, 20, 1);
    insertAtPosition(head, 30, 2);

    cout << "Original list: ";
    display(head);


    // Insert in middle
    insertAtPosition(head, 15, 1);

    cout << "After insertion: ";
    display(head);


    // Insert at beginning
    insertAtPosition(head, 5, 0);

    cout << "After inserting at position 0: ";
    display(head);


    // Insert at end
    insertAtPosition(head, 40, 5);

    cout << "After inserting at end: ";
    display(head);


    // Invalid position
    insertAtPosition(head, 100, 10);


    // Negative position
    insertAtPosition(head, 200, -1);


    return 0;
}