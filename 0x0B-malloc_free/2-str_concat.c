#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a fun that concatenates 2 strings
 * @s1: parameter
 * @s2: parameter
 * Return: a char value
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
		i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
		return (NULL);
		i = j = 0;

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++, j++;
	}

	s[i] = '\0';
	return (s);
}
