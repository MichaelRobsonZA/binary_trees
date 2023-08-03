#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root, *sibling;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);
    binary_tree_print(root);

    sibling = binary_tree_sibling(root->left);
    printf("Sibling of %d: %d\n", root->left->n, sibling ? sibling->n : 0);
    sibling = binary_tree_sibling(root->right);
    printf("Sibling of %d: %d\n", root->right->n, sibling ? sibling->n : 0);
    sibling = binary_tree_sibling(root->right->left);
    printf("Sibling of %d: %d\n", root->right->left->n, sibling ? sibling->n : 0);
    return (0);
}

