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
