#include "binary_trees.h"

/*Task 16: Is Perfect */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
		return 0;

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth != right_depth)
		return 0;

	if (tree->left == NULL && tree->right == NULL)
		return 1;

	return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
}

/**
 * binary_tree_depth - Measures the depth of a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the tree starting at @node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    size_t left_depth = binary_tree_depth(tree->left);
    size_t right_depth = binary_tree_depth(tree->right);

    return (left_depth > right_depth ? left_depth + 1 : right_depth + 1);
}
