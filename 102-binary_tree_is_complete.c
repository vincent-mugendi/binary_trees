#include "binary_trees.h"

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Create a queue for level-order traversal */
	binary_tree_t *queue[100];
	int front = 0, rear = -1;

	/* Flag to indicate that non-complete nodes are allowed */
	int flag = 0;

	queue[++rear] = (binary_tree_t *)tree;

	/* Traverse the tree using level-order traversal */
	while (front <= rear)
	{
		/* Dequeue a node */
		binary_tree_t *current = queue[front++];

		/* If current node is NULL and flag is set, it's not a complete tree */
		if (current == NULL && flag)
			return (0);

		/* If current node is NULL and flag is not set, set the flag */
		if (current == NULL)
			flag = 1;

		/* Enqueue the left child */
		if (current && current->left)
			queue[++rear] = current->left;
		else if (current && current->right)
			queue[++rear] = NULL;

		/* Enqueue the right child */
		if (current && current->right)
			queue[++rear] = current->right;
		flag = 1;
	}

	return (1);
}
