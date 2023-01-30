#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* add_node - Adds a new node at the beginning of a list_t.
* @head: pointer to the head of list_t.
* @str: string to be added to the list_t
* Return: if the function fails - NULL.
*       otherwise address of the new element.
*/

list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *ptr;

ptr = malloc(sizeof(list_t));
if (ptr == NULL)
{
	return (NULL);
}

dup = strdup(str);
if (dup == NULL)
{
	free(ptr);
	return (NULL);
}
for (len = 0; str[len];)
	len++;

ptr->str = dup;
ptr->len = len;
ptr->next = *head;
*head = ptr;
return (ptr);
}
