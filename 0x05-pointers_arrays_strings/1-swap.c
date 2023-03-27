#include "main.h"

/**
  *swap_int - a fun that swaps to int
  *@a: prameter of type int
  *@b: the 2nd parameter of type int to be swaped
  *Return: viod
  */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
