node * insert(node * root, int value) {
    node *temp = root;
    node *newNode, *prev;
    newNode->data = value;
    if (!root) {
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
