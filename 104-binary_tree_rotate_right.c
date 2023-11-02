#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	/* Check if tree or its left child is NULL, no rotation is possible */
	if (tree == NULL || tree->left == NULL)
		return (NULL);

	/* Store the new root which is the current left child of tree */
	new_root = tree->left;

	/* Update tree's left child to be the right child of the new root */
	tree->left = new_root->right;
	if (new_root->right != NULL)
		new_root->right->parent = tree;

	/* Update the parent and right child of the new root */
	new_root->right = tree;
	new_root->parent = tree->parent;

	/* Update tree's parent to be the new root */
	tree->parent = new_root;

	/* Return the new root of the rotated tree */
	return (new_root);
}
