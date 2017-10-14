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

int main(){

    Node *head;

    head = insert(head);
    printList(head);
    printf("%d\n", GetNode(head, 2));

    /*
    Node *nodeA, *nodeB, *merge;

    nodeA=NULL;
    nodeB=NULL;
    merge=NULL;

    nodeA = insert(nodeA);
    nodeB = insert(nodeB);

    printList(nodeA);
    printList(nodeB);

    merge = MergeLists(nodeA, nodeB);


    printList(merge);
    */

    return 0;
}
