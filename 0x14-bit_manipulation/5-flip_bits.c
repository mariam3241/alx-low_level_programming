#include "main.h"

/**
 * flip_bits - a fun that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: parameter
 * @m: parameter
 * Return: an int value
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, k = 0;
	unsigned long int bit;
	unsigned long int num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bit = num >> i;
		if (bit & 1)
			k++;
	}

	return (k);
}
