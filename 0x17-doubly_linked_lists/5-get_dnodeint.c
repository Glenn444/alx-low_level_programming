#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at index
 * @head: ..
 * @index: ..
 * Return: ..
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	if (current == NULL)
		return (NULL);

	return (current);
}
