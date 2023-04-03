#include "main.h"

/**
 * _memcpy - a fun that copies memory area into another
 * @dest: the memro area to copy into
 * @src: the memory area to copy from
 * @n: n bytes
 * Return: poiter
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
	dest[i] = src[i];
	n--;
	}
	return (dest);
}
