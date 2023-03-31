#include "main.h"
/**
 * rot13 - a fun that encode a string
 * @c: parameter
 * Return: c
 */

char *rot13(char *c)
{
int i, j;
char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0 ; c[i] != '\0' ; i++)
{
for (j = 0 ; j < 52 ; j++)
{
if (c[i] == data[j])
{
c[i] = datarot[j];
break;
}
}
}
return (c);
}
