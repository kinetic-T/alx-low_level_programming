#include "main.h"

/**
 * _print_rev_recursion - Recursively print letters in rev
 * @s: string to print
 *
 * Return: Return nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);

	_putchar(*s);
}
