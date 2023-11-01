#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 *
 * Description: This function creates a new binary tree node with the given
 * value and parent node. The left and right pointers of the new node are set
 * to NULL. It returns a pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	/* Checcking if malloc was successfull */
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
