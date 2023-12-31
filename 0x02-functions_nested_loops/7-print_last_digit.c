#include "main.h"

/**
 * print_last_digit - function name
 * @n: number to check
 * Description: print last digit
 * Return: returns last digit
 */

int print_last_digit(int n)
{
	int value;

	if (n > 0)
	{
		value = n % 10;
		_putchar('0' + value);
		return (value);
	}
	else if (n == 0)
	{
		value = n;
		_putchar('0' + value);
		return (value);
	}
	else
	{
		value = (-1 * n) % 10;
		_putchar('0' + value);
		return (value);
	}
}
