#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    struct Node *head, *second, *third;

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    cout << head->data << " ";
    cout << head->next->data << " ";
    cout << head->next->next->data;

    free(head);
    free(second);
    free(third);

    return 0;
}