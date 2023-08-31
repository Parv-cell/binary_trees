#include "binary_trees.h"

/**
 * binary_tree_nodes - this counts nodes with at least 1 child in binary tree
 *
 * Description:
 * @tree: pointer to root node of tree to be traversed
 *
 * Return: number of nodes with at least one child
 * or none (0) if tree is null or has one node
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_node;
	size_t left_node;

	if (!tree)
		return (0);

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	if ((tree->left || tree->right))
		return (1 + left_node + right_node);

	return (left_node + right_node);
}
