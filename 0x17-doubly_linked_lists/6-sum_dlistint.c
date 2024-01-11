#include "lists.h"
#include <stdlib.h>
/**
 *sum_dlistint - get sum of list
 *@head: ..
 *Return: ..
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
