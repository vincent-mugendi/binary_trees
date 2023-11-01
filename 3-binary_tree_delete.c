#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Recursively deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * Description:
 * This function recursively deletes all nodes in the binary tree
 * rooted at the given node. It starts by deleting the left subtree,
 * then the right subtree, and finally the current node itself.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/* Base case: if the tree is NULL, do nothing */
	if (tree == NULL)
		return;

	/* Recursively delete left and right subtrees */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Delete the current node */
	free(tree);
}
