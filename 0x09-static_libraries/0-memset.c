#include "main.h"

/**
 * _memset - a fun that fill a block of memory
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: a value of char type
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

