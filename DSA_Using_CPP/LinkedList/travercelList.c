#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void traverseList(struct Node* head) 
{
    struct Node* current = head; 
    if (current == NULL) {
        printf("The list is empty.\n");
        return;
    }
  
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next; 
    }
    printf("NULL");
   
}

int main() {
    
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

   
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL; 

    traverseList(head);


    free(head);
    free(second);
    free(third);

    return 0;
}