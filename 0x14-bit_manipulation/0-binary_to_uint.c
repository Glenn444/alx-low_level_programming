#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts binary to number
 * @b: points to a string of 0 and 1 chars
 * Return: converted number
 **/
unsigned int binary_to_uint(const char *b)
{
	size_t i, length;
	unsigned int result;

	if (b == NULL)
		return (0);

	length = strlen(b);
	result = 0;

	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
