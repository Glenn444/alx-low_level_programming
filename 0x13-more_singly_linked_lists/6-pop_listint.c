#include "lists.h"
/**
* pop_listint - takes parameter head and returns data in the
*               first deleted node in listint_t
* @head: points to listint_t
* Return: returns data in the deleted node
*/
int pop_listint(listint_t **head)
{

listint_t *current;
int n;

if (*head == NULL)
{
        return (0);
}

current = *head;
n = (*head)->n;
*head = (*head)->next;

free(current);

return (n);
}
