#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
* print_list - returns number of nodes
* return - returns 0
* @h: The list_t list.
* Return: number of nodes in h
*/

size_t print_list(const list_t *h)
{

int size_t = 0;

while (h != NULL)
{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
	printf("[%d] %s\n", h->len, h->str);
	}
	size_t++;
	h = h->next;
}
return (size_t);
}
