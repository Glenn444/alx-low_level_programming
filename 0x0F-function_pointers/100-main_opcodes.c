#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* print_opcodes - ...
* @num_bytes: number of bytes
*
* Return - void
*/
void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; i++)
		printf("%02x ", *(ptr + i));

	printf("\n");
}

/**
* main - calls the opcode func
* @argc: argument counter
* @argv: argument vector
*
* Return - integer 0 on success
*/

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);

	return (0);
}
