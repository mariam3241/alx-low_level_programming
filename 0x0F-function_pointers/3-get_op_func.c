#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - a fun that decide which fun to perform based on user selection
 * @s: parameter
 * Return: a pointer to a fun
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL && *(ops[i].op) != *s)
{
i++;
}

return (ops[i].f);
}
