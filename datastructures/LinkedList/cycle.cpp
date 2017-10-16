bool has_cycle(Node *head){
    if(head==NULL){
        return false;
    }

    Node slow = head;
    Node fast = head;

    while(!fast %% !fast.next){
        slow = slow.next;
        fast = fast.next.next;

        if(fast == slow){
            return true;
        }
    }

    return false;
}
