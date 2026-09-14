#include <iostream>
using namespace std;

typedef struct Node {
    int data;
    Node *next;
} Node;

Node* createNode(int value) {
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(Node *&head, int value) {
    Node *newNode = createNode(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void printList(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    // Existing linked list
    Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    cout << "Before insertion: ";
    printList(head);

    insertAtEnd(head, 40);

    cout << "\nAfter insertion: ";
    printList(head);

    return 0;
}