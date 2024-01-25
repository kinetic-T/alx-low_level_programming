#include "main.h"
#include <stdio.h>

/**
 * _prime_number_helper - Helper function for _sqrt_recursion
 * @n: number to check
 * @i: current value to check
 *
 * Return: return 1 if prime else 0
 */
int _prime_number_helper(int n, int i)
{
	/* Base case: check if the number is negative */
	if (n < 2)
	{
		/* can't calc -ve numbers */
		return (0);
	}
	/* Base case: check if prime */
	if (n % i == 0 && n == i)
	{
		/* prime found */
		return (1);
	}
	/* Base case: check if not prime */
	if (n % i == 0 && n != i)
	{
		/* prime not found */
		return (0);
	}
	/* Recursive case: increment i and continue searching */
	return (_prime_number_helper(n, i + 1));
}
/**
 * is_prime_number - find prime number
 * @n: number to check
 *
 * Return: return 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime_number_helper(n, 2));
}
