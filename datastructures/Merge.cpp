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
