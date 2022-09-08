#include "binary_trees.h"

/**
 * binary_tree_insert_right - Writes a function that inserts a node as
 * the right-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: the value to be placed inside the new node
 * Return: a pointer to the newly created node or NULL upon failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);

	right_child->n = value;
	right_child->parent = parent;
	right_child->left = NULL;
	right_child->right = NULL;

	right_child->right = parent->right;
	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	parent->right = right_child;

	return (right_child);
}
