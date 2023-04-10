#include "main.h"

/**
 * _strcpy - a fun that copies the string pointed to by src
 * @dest: parameter
 * @src: parameter
 * Return: a char value
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
