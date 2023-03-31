#include "main.h"
/**
 * reverse_array - a fun that revers an array of n elements
 * @a: parameter
 * @n: parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0 ; i < n-- ; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
}
}
