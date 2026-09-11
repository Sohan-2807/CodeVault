#include<stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int value){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if(newNode == NULL){
    printf("Memory Allocation failed!\n");
    exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
};

int main(){
    struct Node* head = createNode(10);
    printf("Created node with data:%d\n",head->data);
    return 0;
}

