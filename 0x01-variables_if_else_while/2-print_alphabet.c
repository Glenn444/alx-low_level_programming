#include <stdio.h>

/**
 * main - print alphabets using putchar
 *
 * Return: Always return 0
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');	
	return (0);
}
