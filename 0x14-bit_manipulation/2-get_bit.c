#include "main.h"

/**
 * get_bit - a fun that returns the value of a bit at given index
 * @n: parameter
 * @index: parameter
 * Return: the value of a bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > 63)
		return (-1);

	num = (n >> index) & 1;

	return (num);
}

