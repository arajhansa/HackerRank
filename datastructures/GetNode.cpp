int GetNode(Node *head, int positionFromTail){
    Node *temp;
    int count, position;
    temp=head;
    for(count=0; temp!=NULL; count++, temp = temp->next);
    position = count - positionFromTail -1;
    for(temp=head; position>0; position--, temp=temp->next);
    return temp->data;
}
