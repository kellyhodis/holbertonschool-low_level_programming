#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 or height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height = 0;

	/* add another height variable and traverse tree on right side
	   then check which is greater and return the greater one */
	while (tree->left)
	{
		tree = tree->left;
		height++;
	}
	while (tree->right)
	{
		tree = tree->right;
		height++;
	}
	return (height);
}
