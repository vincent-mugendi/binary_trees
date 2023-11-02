#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);
	/* Recursively calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return max height of left and right subtrees, plus 1*/
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* If tree is NULL, it is not perfect */
	if (tree == NULL)
		return (0);

	/* Check if left and right subtrees have the same height and are perfect */
	return (binary_tree_height(tree->left) == binary_tree_height(tree->right) &&
		binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
