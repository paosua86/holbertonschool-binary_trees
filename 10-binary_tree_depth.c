#include "binary_trees.h"

/**
 * binary_tree_depth -  function that measures
 * the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: 1 if node is a leaf, otherwise 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (depth);

	for (depth = 0; tree->parent != NULL; depth++)
	{
		tree = tree->parent;
	}
	return (depth);
}
