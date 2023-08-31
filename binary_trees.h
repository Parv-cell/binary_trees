#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - the Binary tree node
 *
 * Description:
 * @n: Integer stored in the node
 * @right: Pointer to right child node
 * @parent: Pointer to parent node
 * @left: Pointer to left child node
 */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
	struct binary_tree_s *parent;
};

typedef struct binary_tree_s binary_tree_t;
/* the Binary search tree */
typedef struct binary_tree_s bst_t;
/* the AVL Tree */
typedef struct binary_tree_s avl_t;
/* the Max Binary Heap */
typedef struct binary_tree_s heap_t;


/* function prototype */
void binary_tree_delete(binary_tree_t *tree);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
int binary_tree_is_root(const binary_tree_t *node);
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_size(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* print tree demo */
void binary_tree_print(const binary_tree_t *tree);

#endif
