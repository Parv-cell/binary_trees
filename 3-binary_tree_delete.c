#include "binary_trees.h"

/**
* binary_tree_delete - this frees an entire binary tree
*
* Description:
* @tree: pointer to root node of the tree to be deleted
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
