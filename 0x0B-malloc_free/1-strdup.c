#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a fun that duplicate to new memory space location
 * @str: parameter
 * Return: 0
 */

char *_strdup(char *str)

{
char *c;
int i = 0;
int j = 0;

if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
c = malloc(sizeof(char) * (i + 1));

if (c == NULL)
{
return (NULL);
}
for (j = 0; str[j]; j++)
{
c[j] = str[j];
}
return (c);
}

