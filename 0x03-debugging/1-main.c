#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);/*There is no update to the loop hence 0 is always less than 10 causing infinite loop */
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
