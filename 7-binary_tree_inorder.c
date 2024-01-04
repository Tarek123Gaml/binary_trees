#include "binary_trees.h"

/**
 * binary_tree_inorder - traversal the binary tree
 * @tree: root of node
 * @func: function w need prompot
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
