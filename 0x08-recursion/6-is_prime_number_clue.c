#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - Helper function for _sqrt_recursion
 * @n: number to check
 * @divisor: current value to check
 *
 * Return: return 1 if prime else 0
 */
int is_prime_helper(int n, int divisor)
{
	/* Base case: check if the number is less than 2 */
	if (n < 2)
	{
		return (0);
	}
	/* Base case: check if prime */
	if (divisor * divisor > n)
	{
		return (1);
	}
	/* Base case: check if not prime */
	if (n % divisor == 0)
	{
		return (0);
	}
	/* Recursive case: increment i and continue searching */
	return (is_prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - find prime number
 * @n: number to check
 *
 * Return: return 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
