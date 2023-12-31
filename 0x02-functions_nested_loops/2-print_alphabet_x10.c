#include "main.h"

/**
 * print_alphabet_x10 - function name
 * Description: prints lowercase ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	char l;
	int n;

	n = 0;
	while (n < 10)
	{
		l = 0;
		while (l < 26)
		{
			_putchar('a' + l);
			l++;
		}
		_putchar('\n');
		n++;
	}
}
