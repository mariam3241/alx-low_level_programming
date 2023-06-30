#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a fun that returns the number of elements in a linked list
 * @h: parameter
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
