#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;

void printList(struct Node* n){
    while(n!= NULL){
        printf(" %d \n", n->data);
        n = n ->next;   
    }
}

void Push(Node** head, int A){
    Node * n = malloc(sizeof(Node));
    n->data = A;
    n->next = *head;
    *head = n;
}

int main(){
    struct Node* head = NULL;//creating head pointer
    struct Node* second = NULL; //creating second pointer
    struct Node* third = NULL;  //creating third ponter

    // allocate 3 nodes in the heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    
    head ->data = 1;//assign 1 to the data of the first node
    head ->next = second; //point to the next pointer "second"

    second->data = 2;
    second->next = third;

    third ->data = 3;
    third ->next = NULL;

    printList(head);
    
    return 0;
}