#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 *
 * Return: If tree is NULL, the function must return 0 otherwise num of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int n;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		n = 1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left);
		return (n);
	}
	return (0);
}
