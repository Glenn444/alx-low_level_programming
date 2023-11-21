#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to head node
 * @index: index of the node
 * Return: 1 if success, -1 if failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count;

	if (*head == NULL || index == 0)
	{
		if (*head != NULL)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
		}
		return (1);
	}
	current = *head;
	count = 0;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
