#include <stdio.h>
#include <stdlib.h>

typedef struct tree_st
{
    /* 
    size is the amount of nodes in the tree.
    root points to the node at the top of the tree.
     */
    int size;
    node *root;
} tree;
