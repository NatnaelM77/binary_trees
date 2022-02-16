#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: a pointer to the parent node
 * @value: the value of the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	if (!parent)
		new->parent = NULL;
	else
		new->parent = parent;

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
