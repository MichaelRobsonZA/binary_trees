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

	printf("Height of the binary tree: %lu\n", binary_tree_height(root));

	return (0);
}
