#include "main.h"
/**
 * _strncpy - a fun thar copy a string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: a char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
