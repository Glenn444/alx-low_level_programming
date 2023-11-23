#include <stdio.h>
#include "main.h"
/**
* get_bit - returns value of a bit at a given index
* @n: integer value
* @index: index of value
* Return: value of a bit
**/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mast;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit_value = (n & mask) > 0;

	return (bit_value);
}
