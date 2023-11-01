#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0. If node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check if the node is not NULL and has no children (leaf node) */
	if (node != NULL && node->left == NULL && node->right == NULL)
		/* Node is a leaf */
		return (1);

	return (0);
}
