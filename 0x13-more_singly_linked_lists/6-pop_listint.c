#include "lists.h"

/**
 * pop_listint - a fun that deletes a head node of a list
 * and return the data in it
 * @head: parameter
 * Return: the data from head node or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
