#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: ULL if tree is 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftsub;
	size_t rightsub;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	else
	{
		leftsub = binary_tree_height(tree->left) + 1;
		rightsub = binary_tree_height(tree->right) + 1;
	}

	if (leftsub > rightsub)
		return (leftsub);
	else
		return ( rightsub);
}
