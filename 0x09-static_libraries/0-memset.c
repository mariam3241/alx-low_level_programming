#include "main.h"

/**
 * _memset - a fun that fill memory
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: an array of type char
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
