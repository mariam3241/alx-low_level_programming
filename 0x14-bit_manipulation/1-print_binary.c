#include "main.h"

/**
 * print_binary - a fun that prints the binary representation of a number
 * @n: parameter
 */

void print_binary(unsigned long int n)
{
	int i, k = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			k++;
		}
		else if (k)
			_putchar('0');
	}
	if (!k)
		_putchar('0');
}
