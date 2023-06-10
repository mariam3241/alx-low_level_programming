#include "main.h"

/**
 * _strlen - a fun that returns the length of a string
 * @s: parameter
 * Return: an integer value
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

