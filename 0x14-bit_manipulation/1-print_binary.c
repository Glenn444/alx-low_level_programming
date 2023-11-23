#include <stdio.h>
#include "main.h"
/**
 * print_binary - print binary
 * @n: integer
 * Return: void
 **/

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1 << (size - 1);

	while ((mask & n) == 0)
	{
		mask >>= 1;
	}

	while (mask != 0)
	{
		if ((mask & n) != 0)
		{
			_putchar("1");
		}
		else
		{
			_putchar("0");
		}
		mask >>= 1;
	}
}
