#include "main.h"

/**
 * set_bit - a fun that sets the value of a bit to 1
 * @n: parameter
 * @index: parameter
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
