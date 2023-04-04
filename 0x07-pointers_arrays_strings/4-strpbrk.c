#include "main.h"

/**
 * _strpbrk - a fun that searches a string
 * @s: parameter
 * @accept: parameter
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0 ; accept[i] ; i++)
	{
	if (*s == accept[i])
	{
	return (s);
	}
	}
	s++;
	}
	return ('\0');
}
