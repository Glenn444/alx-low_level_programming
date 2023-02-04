#include "lists.h"
/**
* add_nodeint - takes parameters head and n and returns pointer to the head
* @head: pointers to the head of listint_t.
* @n: int data for listint_t.
* Return: returns pointer to the head of listint_t.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
{
	return (NULL);
}
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
