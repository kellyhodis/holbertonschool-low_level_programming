#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: 0 or size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size;
	const binary_tree_t *traverse;

	/* add conditions for following nodes to right in left while loop
	   add conditions for following nodes to left in right while loop */
	if (tree)
	{
		size = 1;
		traverse = tree;
		while (traverse->left)
		{
			size++;
			if (traverse->left->right)
				size++;
			traverse = traverse->left;
		}
		traverse = tree;
		while (traverse->right)
		{
			size++;
			if (traverse->right->left)
				size++;
			traverse = traverse->right;
		}
	}

	return (size);
}
