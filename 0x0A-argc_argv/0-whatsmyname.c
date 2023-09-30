#include <stdio.h>
/**
* main - Prints the first argument of a function
* @argc - argument counter
* @argv - argument vector
* Returns - 0 when sucess
**/
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
