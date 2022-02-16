#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
void print_num(int n)
{
	printf("%d\n", n);
}

/**
 * main - main program
 * Return: 0
 */

int main(void)
{
	binary_tree_t *root;
	root = binary_tree_node(NULL, 98);

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);
	binary_tree_delete(root);

	binary_tree_print(root);
	/* getchar(); */
	return (0);
}
