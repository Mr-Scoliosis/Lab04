struct node_st* search(struct node_st* root, int value) {
    if (root == NULL || root->value == value) {
        printf("Data exists in tree.")
    } else if (root->rightchild = NULL || root->leftchild = NULL) {
        // if root is null and root also has no children,
        // the data isn't in the tree.
        printf("Data does not exist in tree.")
    } else if (value < root->value) {
        /*
        if newNode's value is less than the root's value, it will change
        the "root" to the current root's leftchild, and call search again.
        */ 
        search(root->leftchild, value);
    } else {
        /*
        if newNode's value is less than the root's value, it will change
        the "root" to the current root's rightchild, and call search again.
        */ 
        search(root->rightchild, value);
    }
    return 0;
}