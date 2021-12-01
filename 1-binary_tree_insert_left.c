#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The data to store in the new node.
 *
 * Return: A pointer to the node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_tree = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!binary_tree)
		return (NULL);
	binary_tree->n = value;
	binary_tree->parent = parent;
	if (parent->left)
	{
		binary_tree->left = parent->left;
		binary_tree->left->parent = binary_tree;
	}
	parent->left = binary_tree;
	return (binary_tree);
}
