#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: a pointer to the parent node
 * @value: the value of the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *left_child;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return (NULL);

	if (!parent->left)
	{
		new->left = NULL;
		parent->left = new;
	}
	else
	{
		left_child = parent->left;
		left_child->parent = new;
		new->left = left_child;
		parent->left = new;
	}

	new->n = value;
	new->right = NULL;
	new->parent = parent;

	return (new);
}
