#include <stdio.h>
#include <string.h>
/**
 * main - a fun to print alphabet in both lower and uppercase
 * Return: Always (Success)
 *
 */
int main(void)
{
char str[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;
for (i = 0 ; i < 26 ; i++)
{
putchar(str[i] + 32);
putchar(str[i]);
}
putchar('\n');
return (0);
}
