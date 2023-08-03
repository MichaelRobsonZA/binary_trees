#include "binary_trees.h"

/*Task 13: Nodes */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return 0;

	return binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
}
