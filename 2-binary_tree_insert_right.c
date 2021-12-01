#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The data to store in the new node.
 *
 * Return: A pointer to the node created
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_tree = 0;

	if (parent == 0)
		return (0);
	binary_tree = malloc(sizeof(binary_tree_t));
	if (binary_tree == 0)
		return (0);
	binary_tree->parent = parent;
	binary_tree->n = value;
	if (parent->right != 0)
	{
		binary_tree->right = parent->right;
		binary_tree->right->parent = binary_tree;
	}
	parent->right = binary_tree;
	return (binary_tree);
}