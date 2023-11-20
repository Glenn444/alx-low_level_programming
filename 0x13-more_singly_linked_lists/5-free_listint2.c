#include <stdlib.h>
#include "lists.h"
/**
* free_listint2 - function that frees a listint_t list
* @head: pointer to the head node
* Return: void
**/
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}
