#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns sum of all data
 * @head: pointer to the head of the node
 *
 * Return: sum of all the data (n)
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
