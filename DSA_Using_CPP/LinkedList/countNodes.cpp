#include <iostream>

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

// Function to insert a node at the end of the linked list
void insertNode(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// 1. Iterative count
int countNodesIterative(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

// 2. Recursive count
int countNodesRecursive(Node* head) {
    if (head == nullptr) {
        return 0;
    }
    return 1 + countNodesRecursive(head->next);
}

// 3. Conditional count for even numbers
int countEvenNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->data % 2 == 0) {
            count++;
        }
        temp = temp->next;
    }
    return count;
}

int main() {
    Node* head = nullptr;
    
    // Insert some nodes
    insertNode(head, 10);
    insertNode(head, 15);
    insertNode(head, 20);
    insertNode(head, 25);
    insertNode(head, 30);
    insertNode(head, 35);
    
    // Print the list for reference
    cout << "Linked List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    
    // Test the counting functions
    cout << "Total nodes (Iterative): " << countNodesIterative(head) << endl;
    cout << "Total nodes (Recursive): " << countNodesRecursive(head) << endl;
    cout << "Total even nodes: " << countEvenNodes(head) << endl;
    
    // Free memory
    while (head != nullptr) {
        Node* next = head->next;
        delete head;
        head = next;
    }
    
    return 0;
}