#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes.
 * If no common ancestor was found, return NULL.
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second
		)
{
	const binary_tree_t *temp1 = first;
	const binary_tree_t *temp2 = second;

	/* Check if either of the nodes is NULL */
	if (first == NULL || second == NULL)
		return (NULL);

	/* Iterate through ancestors of the first node */
	while (temp1 != NULL)
	{
		temp2 = second;
		/* Check if the second node is an ancestor of the first node */
		while (temp2 != NULL)
		{
			/* If a common ancestor is found, return the pointer to that node */
			if (temp1 == temp2)
				return ((binary_tree_t *)temp1);
			temp2 = temp2->parent;
		}
		temp1 = temp1->parent;
	}

	/* If no common ancestor was found, return NULL */
	return (NULL);
}
