#include "binary_trees.h"

/*
 * binary_tree_delete - Deletes an entire binary tree.
 * @tree: a pointer to the root node of the tree to delete
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *root = tree;
	binary_tree_t *node;
	binary_tree_t **tmp;

	if (tree)
	{
		tmp = &tree->left;
		while (tree) {
			if (tree->left)
			{
				tmp = &tree->left;
				tree = tree->left;
			}
			else
			{
				if (tree->right)
				{
					tmp = &tree->right;
					tree = tree->right;
				}
				else
				{
					node = tree->parent->parent;
					free(tree);
					tree = node;
					*tmp = NULL;
				}
			}
		}
		tree = root;
		tmp = &tree->right;
		while (tree)
		{
			if (tree->right)
			{
				tmp = &tree->right;
				tree = tree->right;
			}
			else
			{
				if (tree->left)
				{
					tmp = &tree->left;
					tree = tree->left;
				}
				else
				{
					node = tree->parent->parent;
					free(tree);
					tree = node;
					*tmp = NULL;
				}
			}
		}
	}
}
