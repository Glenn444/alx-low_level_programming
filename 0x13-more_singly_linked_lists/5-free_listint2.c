#include "lists.h"
/**
* free_listint2 - takes parameters head and frees listint_t
* @head: pointer to listint_t
*
*/
void free_listint2(listint_t **head)
{
listint_t *phead;

while (*head)
{
	phead = (*head)->next;
	free(*head);
	*head = phead;
}
	head = NULL;
}
