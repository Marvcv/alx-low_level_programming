#include "function_pointers.h"

/**
 * array_function - iterates a function given as a
 * parameter on each element of an array.
 * @matrix: input integer array.
 * @sizes: size of the array.
 * @action: pointer to the function.
 *
 * Return: no return.
 */
void array_function(int *matrix, size_t sizes, void (*action)(int))
{
	unsigned int j;

	if (matrix && action)
		for (j = 0; j < size; j++)
			action(matrix[j]);
}
