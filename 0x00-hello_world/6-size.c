#include <stdio.h>
/**
 * main - A program that prints various of computer types
 * Return 0 (Success)
 */
int main(void)
{
char x;
int y;
long int a;
long long int b;
float f;
printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(x));
printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(y));
printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
return (0);
}
