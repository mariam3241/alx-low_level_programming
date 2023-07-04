#include "lists.h"

/**
 * *get_nodeint_at_index - a fun that returns n th node of a list
 * @head: parameter
 * @index: parameter
 * Return: a spicefic node or null if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
