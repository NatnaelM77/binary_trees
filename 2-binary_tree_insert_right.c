#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the right-child of another node.
 * @parent: a pointer to the parent node
 * @value: the value of the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *right_child;

	if (!parent)
		return NULL;

	new = malloc(sizeof(binary_tree_t));

	if (!new)
		return NULL;

	if (!parent->right)
	{
		new->right = NULL;
		parent->right = new;
	}
	else
	{
		right_child = parent->right;
		right_child->parent = new;
		new->right = right_child;
		parent->right = new;
	}

	new->n = value;
	new->left = NULL;
	new->parent = parent;

	return (new);
}