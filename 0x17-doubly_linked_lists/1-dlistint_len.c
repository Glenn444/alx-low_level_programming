#include "lists.h"
/**
 *dlistint_len - number of elements in a dlistint_t list
 *@h: pointer to the head node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
