#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: parameter
 * @accept: parameter
 * Return: (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}

return ('\0');
}
