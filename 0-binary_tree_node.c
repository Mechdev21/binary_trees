#include "binary_trees.h"

/**
 * binary_tree_node - dynamically creates a new node
 * @parent: pointer to root node
 * @value: value of the node
 *
 * Return:pointer to new node or null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	
	if (parent != NULL)
	{
		if (parent->left == NULL)
			parent->left = new;
		else
			parent->right = new;
	}

	return (new);
}
