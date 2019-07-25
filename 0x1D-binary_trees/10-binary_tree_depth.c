#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure depth
 *
 * Return: 0 or depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree && tree->parent && !(tree->parent->parent))
		return (1);
	else if (tree && tree->parent && tree->parent->parent)
		return (1 + binary_tree_depth(tree->parent));

	return (binary_tree_depth(tree->parent));
}
