#include "binary_trees.h"

/*
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: a pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node;
	binary_tree_t *parent;
	binary_tree_t *child;

	if (tree)
	{
		node = tree->left;
		while (node)
		{
			if (node->left == NULL)
			{
				node->parent->left = NULL;
				parent = node->parent;
				while (parent)
				{
					if (parent->right == NULL)
					{
						parent->parent->right = NULL;
						free(parent);
						parent = node->parent;
					}
					else
					{
						parent = parent->right;
					}
				}
				free(node);
			}
			else
			{
				node = node->left;
			}
		}
	}
}