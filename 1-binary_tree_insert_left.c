#include "binary_trees.h"

/**
* binary_tree_insert_left - this inserts a node as left-child of another node
*
* Descriptio:
* @parent: pointer to parent node of a new node
* @value: value to put in new node
*
* Return: pointer to new node or NULL on failure
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *newnode_ptr;

	if (!parent)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->left = newnode->right = NULL;


	if (!parent->left)
	{
		parent->left = newnode;
		newnode->parent = parent;
	}
	else
	{
		newnode->left = parent->left;
		(newnode->left)->parent = newnode;
		parent->left = newnode;
	}

	newnode_ptr = newnode;
	return (newnode_ptr);
}
