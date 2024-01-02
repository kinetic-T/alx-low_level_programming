#include "main.h"

/**
 * _puts - func to print string
 * @str: pointer to str
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
