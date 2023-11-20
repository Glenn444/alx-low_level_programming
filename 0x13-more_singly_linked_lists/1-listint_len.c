#include <stddef.h>
#include "lists.h"
/**
* listint_len - number of element in a list
* @h: pointer to the head node
* Return - the number of elements in a list
**/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
