#include <stdio.h>

/**
 * swap_int(int *a, int *b)
 * @a: pointer to int
 * @b: pointer to int
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
