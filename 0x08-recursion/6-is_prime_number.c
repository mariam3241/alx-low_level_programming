#include "main.h"
#include <stdio.h>

/**
 * prime - a fun that checks the prime number
 * @n: parameter
 * @i: parameter
 * Return: 0 or 1
 */

int prime(int n, int i)
{

if (i == 1)
{
return (1);
}

if (n % i == 0 && i > 0)
{
return (0);
}
return (prime(n, i - 1));
}


/**
 * is_prime_number - a fun that checks if the input is a prime number
 * @n: parameter
 * Return: 1 if the input is prime, and 0 otherwise
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime(n, n - 1));
}
