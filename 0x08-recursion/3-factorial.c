#include "main.h"

/**
 * factorial - Find factorial
 * @n: value to find
 *
 * Return: return factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
