node * insert(node * root, int value) {
    node *temp = root;
    node *newNode, *prev;
    newNode = new node;
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    if (root==NULL) {
        return newNode;
    }
    prev = NULL;
    while (temp) {
        prev = temp;
        if (temp->data > value) {
            temp = temp->left;
        } else {
            temp = temp->right;
        }
    }
    if (prev->data > value) {
        prev->left = newNode;
    } else {
        prev->right = newNode;
    }

    return root;
}
