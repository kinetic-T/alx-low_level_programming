#include <stdio.h>

/**
 * swap_int - function to swap values
 * @a: pointer to int a
 * @b: pointer to int b
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
