#include "main.h"

/**
 * _pow_recursion - find power of a number
 * @x: base value
 * @y: exponent
 *
 * Return: return exponential result
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
