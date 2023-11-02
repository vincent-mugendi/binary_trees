#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* Create a queue for level-order traversal */
	/* Enqueue the root node */
	binary_tree_t *queue[100];
	int front = 0, rear = -1;

	queue[++rear] = (binary_tree_t *)tree;

	/* Traverse the tree using level-order traversal */
	while (front <= rear)
	{
		/* Dequeue a node and call the function */
		binary_tree_t *current = queue[front++];

		func(current->n);

		/* Enqueu the left child if it exists */
		if (current->left != NULL)
			queue[++rear] = current->left;

		/* Enqueue the right child if it exists */
		if (current->right != NULL)
			queue[++rear] = current->right;
	}
}
