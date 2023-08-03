#include "binary_trees.h"

/**
 *binary_tree_balance - Measures the balance factor binary tree
 *@tree: Pointer root node of the tree
 *
 *Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)(binary_tree_height(tree->left) -
		binary_tree_height(tree->right)));
}
