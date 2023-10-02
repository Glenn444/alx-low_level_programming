#include <stdio.h>
#include <stdlib.h>
/**
* create_array - creates an array of char
* @size: size of the array
* @c: char assigned to the array
*
* Return: pointer to array
**/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}

