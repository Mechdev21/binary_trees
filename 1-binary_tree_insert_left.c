#include "binary_trees.h"

/**
 * binary_tree_insert_left -  a function that inserts a node as the
 *  left-child of another node
 *  @parent: a pointer to the node to insert the left-child in
 *  @value:  is the value to store in the new node
 *
 *  Return: pointer to created node or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	else
	{
		old_node = parent->left;
		parent->left = new_node;
		new_node->left = old_node;
		new_node->parent = parent;
		old_node->parent = new_node;
	}
	return (new_node);
}
