#include <stdio.h>
#include "main.h"
/**
* set_bit - sets value of a bit to 1 ata given index
* @n: integer
* @index: index, starting from 0 of the bit you want to set
* Return: 1 if worked, -1 if an error occurred
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
