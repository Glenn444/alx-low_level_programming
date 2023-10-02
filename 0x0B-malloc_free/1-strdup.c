#include <stdlib.h>
#include <string.h>
/**
* _strdup - creates a duplicate of a string
* @str: string to be duplicated
*
* Return: pointer to the duplicate
**/
char *_strdup(char *str)
{
	size_t length;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;
	duplicate = (char *)malloc(length * sizeof(char));


	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
