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
