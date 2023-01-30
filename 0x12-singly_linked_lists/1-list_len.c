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

size_t list_len(const list_t *h)
{

int size_t = 0;

while (h != NULL)
{
	size_t++;
	h = h->next;
}
return (size_t);
}
