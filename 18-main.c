#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
	binary_tree_t *root, *sibling;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 128);
	root->left->left = binary_tree_node(root->left, 6);
	root->left->right = binary_tree_node(root->left, 16);

	sibling = binary_tree_sibling(root->left);

	if (sibling)
		printf("Sibling value: %d\n", sibling->n);
	else
		printf("No sibling for the given node.\n");

	return (0);
}
