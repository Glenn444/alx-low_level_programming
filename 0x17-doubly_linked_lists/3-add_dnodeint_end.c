#include "lists.h"
/**
*add_dnodeint_end - add new node to the end of a dlistint_t list
*@head: pointer to the head of the pointer
*@n: integer data
* Return: pointer to the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	new_node = (struct dlistint_s *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	current_node = *head;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (current_node->next != NULL)
	{
		current_node  = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);
}
