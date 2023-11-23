#include <stdio.h>
#include "main.h"
/**
 * clear_bit - clear bit
 * @n: integer
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if success, -1 if error
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
