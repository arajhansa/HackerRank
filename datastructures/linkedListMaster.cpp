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

Node* reverse(Node *head){
    if(head == NULL){
        return head;
    } else if(head->next == NULL){
        return head;
    }
    Node *temp, *prev, *next;
    prev = NULL;
    temp = head;
    next = head->next;
    while(next){
        next = temp->next;
        temp->next = prev;
        prev = temp;
        if(next){
            temp = next;
        }
    }
    return temp;
}

int compare(Node *headA, Node *headB){
    while(headA && headB){
        if(headA->data != headB->data){
            return 0;
        } else {
            headA = headA->next;
            headB = headB->next;
        }
    }
    if(headA || headB){
        return 0;
    }
    return 1;
}

int main(){

    /*
    Node *head;

    head = insert(head);
    printList(head);
    head = reverse(head);
    printList(head);
    */

    Node *nodeA, *nodeB;

    nodeA=NULL;

    nodeA = insert(nodeA);
    nodeB = insert(nodeB);

    printList(nodeA);
    printList(nodeB);

    return 0;
}
