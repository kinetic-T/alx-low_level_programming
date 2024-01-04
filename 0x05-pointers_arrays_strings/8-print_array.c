#include <stdio.h>

/**
 * print_array - prints array of numbers
 * @a: pointer to array
 * @n: number of elements to print
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");

		i++;
	}
	putchar('\n');
}
