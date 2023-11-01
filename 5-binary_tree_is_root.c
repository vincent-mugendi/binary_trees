#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a root, otherwise 0. If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Check if the node is not NULL and has no parent (root node) */
	if (node != NULL && node->parent == NULL)
		/* Node is a root */
		return (1);

	/* Node is not a root or is NULL */
	return (0);
}
