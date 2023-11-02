#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 * Return: Pointer to the new root node of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	/* Check if tree or its right child is NULL, no rotation is possible */
	if (tree == NULL || tree->right == NULL)
		return (NULL);

	/* Store the new root which is the current right child of tree */
	new_root = tree->right;

	/* Update tree's right child to be the left child of the new root */
	tree->right = new_root->left;
	if (new_root->left != NULL)
		new_root->left->parent = tree;

	/* Update the parent and left child of the new root */
	new_root->left = tree;
	new_root->parent = tree->parent;

	/* Update tree's parent to be the new root */
	tree->parent = new_root;

	/* Return the new root of the rotated tree */
	return (new_root);
}
