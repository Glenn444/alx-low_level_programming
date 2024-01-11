#include "lists.h"
/**
 *add_dnodeint - add node to the beginning of the dlistint_t list
 *@head: pointer to the head of the list
 *@n: integer data
 *Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;


	new_node = (struct dlistint_s *)malloc(sizeof(struct dlistint_s));
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
