#include "binary_trees.h"

/*Task 14: Balance Factor */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 0;

	return (int)(binary_tree_height(tree->left) - binary_tree_height(tree->right));
}