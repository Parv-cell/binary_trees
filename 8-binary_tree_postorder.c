#include "binary_trees.h"

/**
* binary_tree_postorder - goes through binary tree using post-order traversal
*
* Description:
* @tree: pointer to root node of the tree to be travsersed
* @func: pointer to a function to print node data
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
