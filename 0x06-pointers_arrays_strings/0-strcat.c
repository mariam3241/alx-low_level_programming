#include "main.h"

/**
 * _strcat - a fun that concatinates 2 strings
 * @dest: 1st parameter
 * @src: 2nd parameter
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
