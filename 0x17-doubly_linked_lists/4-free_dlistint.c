#include <stdlib.h>
#include "lists.h"
/**
*free_dlistint - free the list
*@head: pointer to the head of the list
*Return: ..
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *temp;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
