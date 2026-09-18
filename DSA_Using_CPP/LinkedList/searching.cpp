#include <iostream>
using namespace std;

typedef struct Node {
    int data;
    Node *next;
} Node;

// Function to create a new node
Node* createNode(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Recursive function to search for a key in a Linked List
bool searchRecursive(Node *head, int key) {
    // Base Case 1: Key not found
    if (head == NULL) {
        return false;
    }

    // Base Case 2: Key found at current node
    if (head->data == key) {
        return true;
    }

    // Recursive step: Search in the rest of the list
    return searchRecursive(head->next, key);
}

// Helper function to print the linked list
void printList(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating a linked list: 10 -> 20 -> 30 -> 40 -> NULL
    Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    cout << "Linked List: ";
    printList(head);

    int key1 = 30;
    int key2 = 50;

    // Searching for key1
    if (searchRecursive(head, key1)) {
        cout << "Element " << key1 << " found in the linked list." << endl;
    } else {
        cout << "Element " << key1 << " not found in the linked list." << endl;
    }

    // Searching for key2
    if (searchRecursive(head, key2)) {
        cout << "Element " << key2 << " found in the linked list." << endl;
    } else {
        cout << "Element " << key2 << " not found in the linked list." << endl;
    }

    return 0;
}
