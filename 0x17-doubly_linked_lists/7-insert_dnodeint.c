#include <stdlib.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - ..
 *@h: ..
 *@idx: ..
 *@n: ..
 *Return: ..
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current != NULL && idx > 1)
	{
		current = current->next;
		idx--;
	}
	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
