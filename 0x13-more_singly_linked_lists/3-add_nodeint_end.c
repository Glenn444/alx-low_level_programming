#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - adds a node at the end
* @head: pointer to the head of the list
* @n: data
* Return: pointer to the new node
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
    }
	return (new_node);
}
