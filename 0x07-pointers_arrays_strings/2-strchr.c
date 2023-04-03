#include "main.h"

/**
 * _strchr - a fun that search for a character in a string
 * @s: the string to search in
 * @c: the character to search for
 * Return: the char with the rest of the string or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	else
	{
	return (NULL);
	}
	}
}
