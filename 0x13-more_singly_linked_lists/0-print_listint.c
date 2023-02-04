#include "lists.h"
/**
* print_listint - takes parameter listint_t h and return number of nodes.
* @h: listint_t pointing to the head of the list
* Return: number of nodes.
*/
size_t print_listint(const listint_t *h)
{
int size_t = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	size_t++;
}
return (size_t);
}
