#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct Node {
    int data;
    Node *next;
} Node;

Node* createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node));

    newNode->data = value;
    newNode->next = NULL;

    return newNode;
}

void printList(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node *head = createNode(10);
    Node *second = createNode(20);
    Node *third = createNode(30);

    head->next = second;
    second->next = third;

    printList(head);

    return 0;
}