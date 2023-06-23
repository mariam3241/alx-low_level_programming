#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a fun that executes a giiven fun as a parameter
 * @array: parameter
 * @size: parameter
 * @action: parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
