#include <stdio.h>
#include <stdlib.h>

typedef struct node_st
{
    /*
    value is the integer assigned to the node.
    leftchild points to the left child node.
    rightchild points to the right child node.
     */
    int value;
    struct node *leftchild;
    struct node *rightchild;
} node_st;
