#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
	binary_tree_t * root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 128);
	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 16);

	if (binary_tree_is_full(root))
		printf("The binary tree is full.\n");
	else
		printf("The binary tree is not full.\n");

	return (0);
}
