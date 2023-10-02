#include <stdlib.h>
#include <string.h>
/**
* str_concat - concatenates two strings
* @s1: first string to be concat
* @s2: second string to be concat
*
* Return: pointer to the concat string
**/
char *str_concat(char *s1, char *s2)
{
	size_t length;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}


	length = strlen(s1) + strlen(s2) + 1;


	result = (char *)malloc(length * sizeof(char));

	if (result == NULL)
	{
	return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
