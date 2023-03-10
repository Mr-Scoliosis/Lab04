struct node* insert(int data) {
    /*
    Part 1 of insert, creation of the node with the desired value.
    */
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    if (newNode != NULL) {
    /* making sure memory can be correctly allocated */
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
    }
    /*
    Part 2 of insert, assigning insert to the correct location.
    */
}