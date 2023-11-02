#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs in-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to be called for each node
 *
 * Description: This function traverses the binary tree using in-order
 * traversal and applies the given function to each node's value.
 * If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* Call the function on the current node */
	func(tree->n);

	/* Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}
