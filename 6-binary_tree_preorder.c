#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs pre-order traversal on a binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Base case: If tree is NULL or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* Apply the function to the current node */
	func(tree->n);

	/* Recur on the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recur on the right subtree */
	binary_tree_preorder(tree->right, func);
}
