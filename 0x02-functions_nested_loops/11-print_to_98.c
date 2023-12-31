#include <stdio.h>

/**
 * print_to_98 - function name
 * @n: number
 * Description: Print to 98
 * Return: void
 */

void print_to_98(int n)
{

	if (n > 98)
	{
		while (n != 99)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		putchar('\n');
	}
	else if (n == 98)
		printf("%d\n", n);
	else if (n < 98)
	{
		while (n != 99)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		putchar('\n');
	}
}
