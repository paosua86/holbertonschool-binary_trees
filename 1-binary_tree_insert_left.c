#include "binary_trees.h"

/**
 * binary_tree_insert_left - Write a function that inserts a node as
 * the left_child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: the value to be placed inside the new node
 * Return: a pointer to the newly created node or NULL upon failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);

	left_child->n = value;
	left_child->parent = parent;
	left_child->left = NULL;
	left_child->right = NULL;

	left_child->left = parent->left;
	if (left_child->left != NULL)
		left_child->left->parent = left_child;
	parent->left = left_child;

	return (left_child);
}
