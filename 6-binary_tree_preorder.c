#include "binary_trees.h"

/**
* binary_tree_preorder - goes through binary tree using pre-order traversal
*
* Description:
* @tree: pointer to root node of tree to be traversed
* @func: pointer to function to print data in each node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
