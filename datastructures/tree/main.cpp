#include "treeMaster.cpp"
#include "bTreeInsert.cpp"

int main() {
    node *root;
    int i;
    root = NULL;
    printf("enter I: ");
    scanf("%d", &i);
    for(; i>0; i--){
        printf("enter val: ");
        int val;
        scanf("%d", &val);
        root = insert(root, val);
    }
    printTree(root, NULL, false);
    return 0;
}
