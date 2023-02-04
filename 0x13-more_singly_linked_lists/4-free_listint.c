#include "lists.h"
/**
* free_listint - takes parameter head of listint_t and free all memory in the listnit_t.
* @head: points to listint_t.
*/
void free_listint(listint_t *head)
{
listint_t *phead;

while (head)
{
	phead = head->next;
	free(head);
	head = phead;
}
}
