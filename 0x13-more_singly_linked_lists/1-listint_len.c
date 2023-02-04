#include "lists.h"
/**
* listint_len - takes parameter h and returns number of elements
*		in listint_t.
* @h: points to listint_t head.
* Return: returns number of nodes in listint_t.
*/
size_t listint_len(const listint_t *h)
{

int size_t = 0;

while (h != NULL)
{
	h = h->next;
	size_t++;
}
return (size_t);
}
