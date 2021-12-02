#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: If the tree is NULL return 0 otherwise return the size.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
		return (0);

	size = 1 + binary_tree_size(tree->right) + binary_tree_size(tree->left);

	return (size);
}
