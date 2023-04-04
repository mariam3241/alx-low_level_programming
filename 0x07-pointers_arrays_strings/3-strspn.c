#include "main.h"

/**
 * _strspn - a fun that gets a lenght of a string
 * @s: parameter
 * @accept: parameter
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	int i;

	while (*s)
	{
	for (i = 0 ; accept[i] ; i++)
	{
	if (*s == accept[i])
	{
	len++;
	break;
	}
	else if (accept[i + 1] == '\0')
	{
	return (len);
	}
	}
	s++;
	}
	return (len);
}
