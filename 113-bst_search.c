#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a Binary Search Tree
 * @tree: Pointer to the root node of the BST to search
 * @value: The value to search in the tree
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);

	/* If the current node's value matches the target value, return the node */
	if (tree->n == value)
		return ((bst_t *)tree);

	/* If the target value is less than the current node's value*/
	if (value < tree->n)
		return (bst_search(tree->left, value));

	/* If the target value is greater than the current node's value*/
	return (bst_search(tree->right, value));
}
