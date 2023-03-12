#include <stdio.h>
#include <stdlib.h>

void insert(struct node_st** root, struct node_st* newNode) {
    /*
    Part 2 of insertion, assigning insert to the correct location in
     the binary search tree.
    */
    if (*root == NULL) {
        *root = (struct node*) malloc(sizeof(struct Node));
        (*root)->data = newNode->data;
        (*root)->left = NULL;
        (*root)->right = NULL;
    }
    else if (newNode->data < (*root)->data) {
        /*
        if newNode's data is less than the root's data, it will change
        the "root" to the current root's leftchild, and call insert again.
        */ 
        insert(&((*root)->leftchild), newNode);
    }
    else if (newNode->data > (*root)->data) {
        /*
        if newNode's data is greater than the root's data, it will change
        the "root" to the current root's rightchild, and call insert again.
        */ 
        insert(&((*root)->rightchild), newNode);
    } else {
        return 0;
    }
}

struct node* create(int newData) {
    /*
    Part 1 of insertion, creation of the node with the desired value.
    */
    // making sure memory can be correctly allocated.
    struct node_st* newNode = (struct node_st*) malloc(sizeof(struct node));
    if (newNode != NULL) {
        newNode->data = newData;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;
    }
    insert(rootNode, newNode)
}
