#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child of another node
 * @parent: pointer to node to insert right-child in
 * @value: value to store in new node
 *
 * Return: pointer to created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child;

	if (!parent)
		return (NULL);

	new_right_child = malloc(sizeof(binary_tree_t));
	if (!new_right_child)
		return (NULL);

	if (parent->right)
	{
		new_right_child->right = parent->right;
		new_right_child->right->parent = new_right_child;
	}
	else
		new_right_child->right = NULL;

	parent->right = new_right_child;
	new_right_child->parent = parent;
	new_right_child->left = NULL;
	new_right_child->n = value;

	return (new_right_child);
}
