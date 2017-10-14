#include "linkedListMaster.cpp"

#include "cycle.cpp"

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
