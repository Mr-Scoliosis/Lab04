#include <stdio.h>
#include <stdlib.h>

struct node* insert(struct node_st** root, int newData) {
    /*
    Part 1 of insert, creation of the node with the desired value.
    */
    // making sure memory can be correctly allocated.
    struct node_st* newNode = (struct node_st*) malloc(sizeof(struct node));
    if (newNode != NULL) {
        newNode->data = newData;
        newNode->leftchild = NULL;
        newNode->rightchild = NULL;
    }
    /*
    Part 2 of insert, assigning insert to the correct location in
     the binary search tree.
    */
   if (newNode->data > root->data) {
        root->rightchild = &newNode;
   } else if (newNode->data < root->data) {
        root->leftchild = &newNode;
   } else {
        printf("root value and newNode value are the same value.")
        // The data already exists in the tree.
   }
   return 0;
}