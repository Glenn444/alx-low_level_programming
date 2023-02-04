#include "lists.h"
/**
*add_nodeint_end - takes parameters head and n and returns pointer 
*			to the node of listint_t
* @head: pointer to the head of listint_t.
* @n: integer data to listint_t.
* Return - returns pointer to the node of listint_t.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *phead, *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = NULL;

if (*head == NULL)
{
	*head = new;
}
else
{
	phead = *head;
	while (phead->next != NULL)
	{
		phead = phead->next;
	}
}
phead->next = new;
return (*head);
}
