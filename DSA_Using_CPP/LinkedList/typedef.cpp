#include <iostream>
using namespace std;

typedef struct Node {
    int data;
    Node *next;
} N1;

int main() {
    N1 head, second, third;

    head.data = 10;
    head.next = &second;

    second.data = 20;
    second.next = &third;

    third.data = 30;
    third.next = NULL;

    N1 *temp = &head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}