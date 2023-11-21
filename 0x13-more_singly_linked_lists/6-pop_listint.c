#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes the head node
* @head: pointer to the head node
* Return: head node data (n)
**/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	data = temp->n;
	*head = temp->next;

	free(temp);
	return (data);
}
