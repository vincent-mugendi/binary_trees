#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst_util - Utility function to check if a binary tree is a BST
 * @tree: Pointer to the current node
 * @min: Minimum allowed value in the subtree
 * @max: Maximum allowed value in the subtree
 * Return: 1 if the tree is a BST, 0 otherwise
 */
static int local_is_bst_util(const binary_tree_t *tree, int *min, int *max)
{
	/* Base case: an empty tree is a valid BST */
	if (tree == NULL)
		return (1);

	/* Check if the current node's value is within the allowed range */
	if ((min != INT_MIN && tree->n <= min) ||
			(max != INT_MAX && tree->n >= max))
		return (0);

	/* Recursively check the left subtree with updated max value*/
	return (is_bst_util(tree->left, min, tree->n - 1) &&
			is_bst_util(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	/* Call the utility function with initial minimum and maximum values */
	return (is_bst_util(tree, INT_MIN, INT_MAX));
}
	
