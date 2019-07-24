#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure depth
 *
 * Return: 0 or depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
