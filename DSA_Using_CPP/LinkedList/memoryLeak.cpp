#include <iostream>
using namespace std;

typedef struct Node {
    int data;
    Node *next;
} Node;

int main() {
    Node *head = new Node;
    Node *second = new Node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = NULL;

    // head = NULL; 👈🏻
    // ERROR: Memory leak because allocated nodes are lost

    cout << "Before deletion: ";
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // Proper deletion
    temp = head;

    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }

    // ERROR: cout << head->data;
    // head is NULL after deletion

    cout << "\nAfter deletion: ";
    cout << head;

    return 0;
}