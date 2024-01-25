#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - Helper function for _sqrt_recursion
 * @n: number to check
 * @i: current value to check
 *
 * Return: return sqrt if found and -1 if not found
 */
int _sqrt_recursion_helper(int n, int i)
{
	/* Base case: check if the number is negative */
	if (n < 0)
	{
		/* can't calc -ve numbers */
		return (-1);
	}
	/* Base case: check if the square of i is equal to n */
	if (i * i == n)
	{
		/* sqrt found */
		return (i);
	}
	/* Base case: check if the square of i exceeds n */
	if (i * i > n)
	{
		/* sqrt not found */
		return (-1);
	}
	/* Recursive case: increment i and continue searching */
	return (_sqrt_recursion_helper(n, i + 1));
}

/**
 * _sqrt_recursion - find sqrt of a number
 * @n: number to check
 *
 * Return: return sqrt if found and -1 if not found
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 1));
}
