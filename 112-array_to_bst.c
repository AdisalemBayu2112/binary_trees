#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: a pointer to the first element of the array
 * @size: the number of element in the array
 *
 * Return: returns pointer to the root node of BST
 * or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t idx;

	if (!size)
		return (NULL);
	for (idx = 0; idx < size; idx++)
	{
		bst_insert(&tree, array[idx]);
	}
	return (tree);
}
