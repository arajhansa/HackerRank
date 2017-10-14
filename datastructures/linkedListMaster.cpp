#include<stdio.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

Node* insert(Node *head){
    int size;
    Node *temp, *next;
    scanf("%d",&size);
    if(size==0){
        return head;
    }
    next = head;
    for(; size>0; size--){
        temp = new Node;
        scanf("%d",&temp->data);
        if(head==NULL){
            head = temp;
            next = head;
        } else {
            next->next = temp;
            next = temp;
        }
    }
    return head;
}

void printList(Node *head){
    Node *temp;
    temp = head;
    while(temp){
        printf("%d --> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
