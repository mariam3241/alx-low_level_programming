#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a fun that adds a new node at the beginning of a linked list
 * @head: parameter
 * @str: parameter
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *top;
	unsigned int len = 0;

	while (str[len])
		len++;

	top = malloc(sizeof(list_t));
	if (!top)
		return (NULL);

	top->str = strdup(str);
	top->len = len;
	top->next = (*head);
	(*head) = top;

	return (*head);
}
