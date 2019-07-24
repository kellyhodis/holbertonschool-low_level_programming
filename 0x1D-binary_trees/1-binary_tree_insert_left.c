#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left-child of another node
 * @parent: pointer to node to insert left-child in
 * @value: value to store in new node
 *
 * Return: pointer to created node or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child;

	if (!parent)
		return (NULL);

	new_left_child = malloc(sizeof(binary_tree_t));
	if (!new_left_child)
		return (NULL);

	if (parent->left)
	{
		new_left_child->left = parent->left;
		new_left_child->left->parent = new_left_child;
	}
	else
		new_left_child->left = NULL;

	parent->left = new_left_child;
	new_left_child->parent = parent;
	new_left_child->right = NULL;
	new_left_child->n = value;

	return (new_left_child);
}
