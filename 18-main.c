#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root, *uncle;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    root->right->left = binary_tree_node(root->right, 256);
    root->right->right = binary_tree_node(root->right, 512);
    root->left->left = binary_tree_node(root->left, 6);
    root->left->right = binary_tree_node(root->left, 16);
    binary_tree_print(root);

    uncle = binary_tree_uncle(root->left->left);
    printf("Uncle of %d: %d\n", root->left->left->n, uncle ? uncle->n : 0);
    uncle = binary_tree_uncle(root->right->right);
    printf("Uncle of %d: %d\n", root->right->right->n, uncle ? uncle->n : 0);
    uncle = binary_tree_uncle(root->left);
    printf("Uncle of %d: %d\n", root->left->n, uncle ? uncle->n : 0);
    return (0);
}

