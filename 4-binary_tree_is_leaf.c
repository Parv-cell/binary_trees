#include "binary_trees.h"

/**
* binary_tree_is_leaf - this checks if a node is a leaf
*
* Description:
* @node: pointer to node to be checked
*
* Return: 1 if node is a leaf. Otherwise 0
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
