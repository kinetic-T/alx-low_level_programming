#include "main.h"

/**
 * print_alphabet - function name
 * Description: prints lowercase
 * Return: always 0
 */

void print_alphabet(void)
{
	char l;

	l = 0;
	while (l < 26)
	{
		_putchar('a' + l);
		l++;
	}
	_putchar('\n');
}
