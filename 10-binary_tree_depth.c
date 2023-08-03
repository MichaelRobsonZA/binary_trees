#include "binary_trees.h"

/**
 *binary_tree_depth - Measures the depth of a binary tree
 *@tree: Pointer to the node to measure the depth
 *
 *Return: Depth of the tree starting at @node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
