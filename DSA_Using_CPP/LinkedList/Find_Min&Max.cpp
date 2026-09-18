#include <iostream>
#include <limits.h>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Function to find maximum element iteratively
int findMax(Node* head) {
    if (head == nullptr) {
        return INT_MIN; // Return minimum possible integer for empty list
    }
    
    int max_val = INT_MIN;
    Node* current = head;
    
    while (current != nullptr) {
        if (current->data > max_val) {
            max_val = current->data;
        }
        current = current->next;
    }
    return max_val;
}

// Function to find minimum element iteratively
int findMin(Node* head) {
    if (head == nullptr) {
        return INT_MAX; // Return maximum possible integer for empty list
    }
    
    int min_val = INT_MAX;
    Node* current = head;
    
    while (current != nullptr) {
        if (current->data < min_val) {
            min_val = current->data;
        }
        current = current->next;
    }
    return min_val;
}

// Function to find maximum element recursively
int findMaxRecursive(Node* head) {
    if (head == nullptr) {
        return INT_MIN;
    }
    int max_rest = findMaxRecursive(head->next);
    return (max_rest > head->data) ? max_rest : head->data;
}

// Function to find minimum element recursively
int findMinRecursive(Node* head) {
    if (head == nullptr) {
        return INT_MAX;
    }
    int min_rest = findMinRecursive(head->next);
    return (min_rest < head->data) ? min_rest : head->data;
}

// Helper function to insert node at the end
void insertEnd(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
}

// Helper function to display the linked list
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    
    // Create linked list: 15 -> 14 -> 13 -> 22 -> 17 -> NULL
    insertEnd(head, 15);
    insertEnd(head, 14);
    insertEnd(head, 13);
    insertEnd(head, 22);
    insertEnd(head, 17);
    
    cout << "Linked List: ";
    display(head);
    
    cout << "Maximum element (Iterative): " << findMax(head) << endl;
    cout << "Minimum element (Iterative): " << findMin(head) << endl;
    
    cout << "Maximum element (Recursive): " << findMaxRecursive(head) << endl;
    cout << "Minimum element (Recursive): " << findMinRecursive(head) << endl;
    
    return 0;
}
