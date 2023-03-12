#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node_st* root = NULL;
    root = create(root, 7);
    create(root, 7);
    create(root, 3);
    create(root, 4);
    create(root, 13);
    create(root, 12);
    search(root, 15);
    create(root, 15);
    search(root, 15);
    search(root, 4);
}