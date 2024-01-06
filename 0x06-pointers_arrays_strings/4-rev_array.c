#include <stdio.h>

/**
 * reverse_array - reverse array elements
 * @a: array pointer
 * @n: number of elements
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	n -= 1;
	while (i < n)
	{
		int tmp = a[i];

		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
