#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child of
 *  another node
 *  @parent: pointer to the node to insert the right-child in
 *  @value: value of node to insert
 *
 *  Return: pointer to node or null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *old;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = new;
		new->parent = parent;
	}
	else
	{
		old = parent->right;
		parent->right = new;
		new->right = old;
		new->parent = parent;
		old->parent = new;
	}
	return (new);
}
