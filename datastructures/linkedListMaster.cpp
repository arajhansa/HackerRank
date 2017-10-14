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

int GetNode(Node *head, int positionFromTail){
    Node *temp;
    int count, position;
    temp=head;
    for(count=0; temp!=NULL; count++, temp = temp->next);
    position = count - positionFromTail -1;
    for(temp=head; position>0; position--, temp=temp->next);
    return temp->data;
}

Node* MergeLists(Node *headA, Node *headB){
    Node *cur, *prev, *next, *tempA, *tempB;
    if(!headA){
        return headB;
    }
    if(!headB){
        return headA;
    }
    tempA = headA;
    tempB = headB;
    prev = NULL;
    while(tempA && tempB){
        if(tempA->data > tempB->data){
            cur = tempB;
            if(!prev){
                tempB = tempB->next;
                cur->next = tempA;
                prev = tempA;
                tempA = tempA->next;
                headA = cur;
            } else {
                prev->next = cur;
                tempB = cur->next;
                cur->next = tempA;
                tempA = cur->next;
            }
        } else {
            prev = tempA;
            tempA = tempA->next;
        }
    }
    if(tempB){
        prev->next = tempB;
    }
    return headA;
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
