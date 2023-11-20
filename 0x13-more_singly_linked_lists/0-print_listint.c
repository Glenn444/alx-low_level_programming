#include <stdio.h>
#include "lists.h"
/**
* print_listint - prints the elements in a linked list
* @h: head to the node of the list
* Return: number of elements in the list
**/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
